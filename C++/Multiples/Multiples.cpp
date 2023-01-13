using namespace std;
#include <iostream>
#include <ctime>

int main()
{
    srand(time(NULL));
    long long int number_user = 0;
    int multiples = rand() % 100;
    long long int result;
    int multiples_false = 0;
    long long int result_true;
    int i;

    cout << "selectionnez un nombre : ";
    cin >> number_user;
 
    cout << number_user << " x 2 : ";
    cin >> result;

    result_true = number_user * 2;

    for (i = 0; i <= multiples - 2 ; i++)
    {
        if (result != result_true)
        {
            cout << "Ceci est faux, la bonne reponse etait " << result_true << endl;
            break;
        }


        cout << result << " x 2 : ";
        result_true = result * 2;

        cin >> result;

        if (result != result_true)
        {
            cout << "Ceci est faux, la bonne reponse etait " << result_true << endl;
            break;
        }
      
    }
    cout << "Voila qui met un terme a mon programme, merci " << endl;
}

