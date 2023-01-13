using namespace std;
#include <iostream>



int main()
{
    double taille = 0.0;
    double poids = 0.0;
    double reponse;

    cout << "Bonjour, nous allons determiner votre IMC" << endl;

    while (taille > 300.00 || taille < 1.00)
    {
        while ((cout << "Veuillez entrer votre taille: " && !(cin >> taille)))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    while (poids > 600.0f || poids < 1.0f)
    {
        while ((cout << "Veuillez entrer votre poids : " && !(cin >> poids)))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

     reponse = poids / (taille * taille);

    cout << "Vous avez " << reponse << " comme IMC" << endl;
    

    if (reponse <= 18.5)
    {
        cout << "Vous etes en insuffisance ponderale" << endl;
    }
    else if (reponse <= 24.9)
    {
        cout << "Vous etes en poids normal, c'est bien :)" << endl;
    }
    else if (reponse <= 29.9)
    {
        cout << "Vous etes en surpoids, faites de l'exercices" << endl;
    }
    else if (reponse >= 30)
    {
        cout << "Vous etes en obesite, faites un regime" << endl;
    }



   
    return 0;

}
