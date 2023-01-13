using namespace std;

#include <iostream>
#include <string>

int main()
{
    double prix_objet = 0.00;
    int soldes = 0;
    int soldes_total;
    double economie_total;
    double prix_total;
    string pourcent;

    cout << "Quel est le prix de l'objet : ";
    cin >> prix_objet;

    cout << "Quel est la solde : ";
    cin >> soldes;

    soldes_total = 100 / soldes;

    economie_total = prix_objet / soldes_total;
    prix_total = prix_objet - economie_total;

    cout << "Vous economiserez de " << economie_total << " Frs " << endl;
    cout << "Le prix total sera de " << prix_total << " Frs " << endl;

}


