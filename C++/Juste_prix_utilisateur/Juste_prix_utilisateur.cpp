using namespace std;
#include <ctime>
#include <iostream>

int main()
{
	srand(time(NULL));
	int nbr_ia = rand() % 1000;
	int reponse;
	int limite = 10;
	int essais_perdus = 10;
	int i;

	cout << "Bonjour, ce programme est un test, je vais memoriser un nombre, a vous de le trouver " << endl;
	cout << "Regles : " << endl;
	cout << "-Deviner le nombre, le programme va vous aider en vous disant si c'est trop grand ou trop petit " << endl;
	cout << "-Soyez malin et astucieux dans vos choix, ne laissez pas l'ordinateur gagner! " << endl;
	cout << "-Attention, vous n'avez que " << essais_perdus << " essais " << endl;


	for (i = 0; i < limite; i++)
	{
		cout << endl;



		cout << "Devinez mon nombre : ";
		cin >> reponse;

		if (reponse > nbr_ia)
		{
			cout << "Plus petit!" << endl;
			essais_perdus--;
		}

		if (reponse < nbr_ia)
		{
			cout << "Plus grand!" << endl;
			essais_perdus--;
		}

		cout << endl;
		cout << "Il ne vous reste plus que " << essais_perdus << " essai(s)" << endl;

		if (essais_perdus == 0)
		{
			cout << "Vous avez epuise tous vos essais, vous avez perdu! " << endl;
			break;
		}
		if (reponse == nbr_ia)
		{
			cout << "Vous avez trouve!, en effet mon nombre etait " << nbr_ia << "." << endl;
			break;
		}
	}
}

