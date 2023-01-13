using namespace std;
#include <string>
#include <iostream>

int string_to_num(string chiffre)
{
    if (chiffre == "un") return 1;
    if (chiffre == "deux") return 2;
    if (chiffre == "trois") return 3;
    if (chiffre == "quatre") return 4;
    if (chiffre == "cinq") return 5;
    if (chiffre == "six") return 6;
    if (chiffre == "sept") return 7;
    if (chiffre == "huit") return 8;
    if (chiffre == "neuf") return 9;
    if (chiffre == "dix") return 10;
 
}
int main()
{
    string a;
    string b;
    string op;
    double num_a;
    double num_b;
    double result;
    cout << "Entrez un calcul : " << endl;
    cin >> a >> op >> b;

    num_a = string_to_num(a);
    num_b = string_to_num(b);

    if (op == "plus") result = num_a + num_b;

    if (op == "moins")
    {
        result = num_a - num_b;
    }

    if (op == "fois")
    {
        result = num_a * num_b;
    }

    if (op == "divise")
    {
        result = num_a / num_b;
    }


    cout << "Le resultat de votre calcul est " << result << endl;
}
