using namespace std;
#include <ctime>
#include <iostream>
#include <fstream>

int main()
{   
    int nbre_limite = 1000000;
    int nbre_racines = 0;
    double result_true;
    int result;
    int limite;
    int i;
    ofstream myfile("Racines.txt");


    for (i = 0; i <= nbre_limite; i++)
    {
        result_true = sqrt(nbre_racines);
       
        cout << " la racine carree de " << nbre_racines << " = " << result_true << endl;
        myfile << " la racine carree de " << nbre_racines << " = " << result_true << endl;
        nbre_racines++;
    }
    myfile.close();
}


