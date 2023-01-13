using namespace std;
#include <iostream>
#include <string>


int main()
{
    
    double table_1 = 0.0;
    double table_2 = 0.0;
    string op_asmd;
    double calcul;


    cout << "entrez votre calcul : ";
    cin >> table_1 >> op_asmd >> table_2;



        if (op_asmd == "+")
        {
            calcul = table_1 + table_2;
        }

        if (op_asmd == "-")
        {
            calcul = table_1 - table_2;
        }

        if (op_asmd == "x")
        {
            calcul = table_1 * table_2;
        }

        if (op_asmd == ":")
        {
            calcul = table_1 / table_2;
        }
    
        cout << "La reponse de votre calcul est " << calcul << endl;
  
        return 0;
}


