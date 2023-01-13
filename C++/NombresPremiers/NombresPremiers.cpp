

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int nbremax;
    unsigned long long int i=1;
    int nbrepremier=1, j;
    bool divisible;
    cout << "Combiem de nombres premiers voulez-vous generer: ";
    cin >> nbremax;
    unsigned long long int* premier = new unsigned long long int[nbremax];
    premier[0] = 1;
    premier[1] = 2;
    ofstream MyFile("premiers.csv");
    MyFile << premier[0] << endl;
    MyFile << premier[1] << endl;
    while (nbrepremier < nbremax - 1)
    {
        i+=2;
        divisible = false;
        for (j = 2; j <= nbrepremier; j++)
        {
            if (i % premier[j] == 0)
            {
                divisible = true;
                break;
            }
            if (i < premier[j] * premier[j]) break;
        }
        if (!divisible)
        {
            nbrepremier++;
            premier[nbrepremier] = i;
            if (nbrepremier % (nbremax / 100) == 0)
            {
                cout << nbrepremier * 100 / nbremax << "%" << endl;
            }
            MyFile << i << ";" << endl;
        }
    }
    MyFile.close();
    delete[] premier;
    return 0;
}

