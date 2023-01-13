using namespace std;
#include <iostream>
#include <string>
#include <ctime>

int main()
{
    srand(time(NULL));
    int mots_rand;
    string result;
    string result_true;
    int score = 0;
    int i;
    int limit;

    cout << "Combien de definitions voulez-vous en tout : ";
    cin >> limit;
    cout << endl << endl;

    //Les mots et leur définitions
    for (i = 0; i < limit; i++)
    {
        mots_rand = rand() % 25 + 1;

        if (mots_rand == 1)
        {
            cout << "-abandonner une fontion : ";
            result_true = "Resigner";
        }
        if (mots_rand == 2)
        {
            cout << "-Faire passer un corps a un etat de cristaux : ";
            result_true = "Cristalliser";
        }
        if (mots_rand == 3)
        {
            cout << "-Action d'exporter des produits : ";
            result_true = "Exportation";
        }
        if (mots_rand == 4)
        {
            cout << "-Remettre quelqu'un au soin d'un tiers dont on est sur : ";
            result_true = "Confier";
        }
        if (mots_rand == 5)
        {
            cout << "-Petit tableau : ";
            result_true = "Tableautin";
        }
        if (mots_rand == 6)
        {
            cout << "-Recommander vivement : ";
            result_true = "Preconiser";
        }
        if (mots_rand == 7)
        {
            cout << "-Touffe de cheveux au dessus du front : ";
            result_true = "Toupet";
        }
        if (mots_rand == 8)
        {
            cout << "-Maniere d'agence, arrangement, disposition : ";
            result_true = "Agencement";
        }
        if (mots_rand == 9)
        {
            cout << "-Outil fait d'une masse dure emmanchee en son milieu pour frapper, enfoncer : ";
            result_true = "Maillet";
        }
        if (mots_rand == 10)
        {
            cout << "-Tour sur soi-meme : ";
            result_true = "Volte";
        }
        if (mots_rand == 11)
        {
            cout << "-Attacher un lacet : ";
            result_true = "Lacer";
        }
        if (mots_rand == 12)
        {
            cout << "-Mandarine a peau fine : ";
            result_true = "Clementine";
        }
        if (mots_rand == 13)
        {
            cout << "-Soigner avec tendresse : ";
            result_true = "Choyer";
        }
        if (mots_rand == 14)
        {
            cout << "-Ligament, tendon des muscles : ";
            result_true = "Nerf";
        }
        if (mots_rand == 15)
        {
            cout << "-Natte rugueuse pour s'essuyer les pieds : ";
            result_true = "Paillasson";
        }
        if (mots_rand == 16)
        {
            cout << "-De faible constitution, apparence fragile : ";
            result_true = "Chetif";
        }
        if (mots_rand == 17)
        {
            cout << "-Se diriger : ";
            result_true = "Converger";
        }
        if (mots_rand == 18)
        {
            cout << "-Poussiere produite par les etamines, qui feconde les fleurs femelles : ";
            result_true = "Pollen";
        }
        if (mots_rand == 19)
        {
            cout << "-Fourches, harpon a 3 pointes : ";
            result_true = "Trident";
        }
        if (mots_rand == 20)
        {
            cout << "-Personne qui saisit un texte sur un ordinateur : ";
            result_true = "Claviste";
        }
        if (mots_rand == 21)
        {
            cout << "-Faire naitre, avoir pour effet : ";
            result_true = "Engendrer";
        }
        if (mots_rand == 22)
        {
            cout << "-Sensation physique penible : ";
            result_true = "Douleur";
        }
        if (mots_rand == 23)
        {
            cout << "-Reflechir la lumiere en produisant des reflets scintillants : ";
            result_true = "Miroiter";
        }
        if (mots_rand == 24)
        {
            cout << "-Orner de facon a rendre plus joli, plus agreable : ";
            result_true = "Enjoliver";
        }
        if (mots_rand == 25)
        {
            cout << "-Glisser sur des coulisses : ";
            result_true = "Coulisser";
        }
        cin >> result;
        if (result == result_true)
        {
            score += 10;
        }
    
        if (result != result_true)
        {
            cout << "Non, ce n'est pas ca, la bonne reponse etait " << result_true << "." << endl;
            cout << endl;
        }
    }
    cout << "Vous avez " << score << " points" << endl;
}
