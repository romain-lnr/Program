using namespace std;
#include <string>
#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	int start_ia = rand() % 1000 + 1;
	int start_util = rand() % 1000 + 1;
	string reponse;
	int essais_perdus = 12;
	int i;
	int n = 12;

	cout << "Bonjour, ceci est un test que vous allez faire a l'ordinateur, le but sera que vous vous donniez un nombre," << endl;
	cout << "et que l'ordi le devine de lui-meme!" << endl;

	cout << "Avant de commencer, je vais vous donnez votre nombre : ";
	cout << start_util;
	cout << endl;
	cout << "Maintenant que vous avez votre nombre, essayez de faire deviner a l'ordinateur en utilisant les commandes suivantes:" << endl;
	cout << "M.BPG = [nombre choisit] x 10" << endl;
	cout << "M.PG = [nombre choisit] x 5" << endl;
	cout << "M.UPPG = [nombre choisit] x 2" << endl;
	cout << endl;
	cout << "D.UPPP = [nombre choisit] : 2" << endl;
	cout << "D.PP = [nombre choisit] : 5" << endl;
	cout << "D.BPP = [nombre choisit] : 10" << endl;
	cout << endl;
	cout << "A.BPG = [nombre choisit] + 100" << endl;
	cout << "A.PG = [nombre choisit] + 50" << endl;
	cout << "A.UPPG = [nombre choisit] + 10" << endl;
	cout << endl;
	cout << "S.UPPP = [nombre choisit] - 10" << endl;
	cout << "S.PP = [nombre choisit] - 50" << endl;
	cout << "S.BPP = [nombre choisit] - 100" << endl;
	cout << "Vous les utiliserez quand reponse : s'affichera" << endl;
	cout << endl;
	cout << "N'oubliez pas, votre nombre est " << start_util << "." << endl;
	cout << "Vous n'avez que " << essais_perdus << " essais." << endl;
	cout << "Oh, autre chose, quand l'ordniateur a devine le nombre, criez EUREKA" << endl;
	cout << "Maintenant que tout est clair, commencons" << endl;
	cout << endl << endl;


	for (i = 0; i < n; i++)
	{	
		cout << "ordinateur : " << start_ia; cout <<  " ?" << endl;
		cout << "reponse : "; cin >> reponse;

		if (reponse == "M.BPG")
		{
			start_ia *= 10;
		}
		if (reponse == "M.PG")
		{
			start_ia *= 5;
		}
	    if (reponse == "M.UPPG")
		{
			start_ia *= 2;
		}
		if (reponse == "D.BPP")
		{
			start_ia /= 10;
		}
		if (reponse == "D.PP") 
		{
			start_ia /= 5;
		}
		if (reponse == "D.UPPP")
		{
			start_ia /= 2;
		}
		if (reponse == "A.BPG")
		{
			start_ia += 100;
		}
		if (reponse == "A.PG")
		{
			start_ia += 50;
		}
		if (reponse == "A.UPPG")
		{
			start_ia += 10;
		}
		if (reponse == "S.BPP")
		{
			start_ia -= 100;
		}
		if (reponse == "S.PP")
		{
			start_ia -= 50;
		}
		if (reponse == "S.UPPP")
		{
			start_ia -= 10;
		}

		essais_perdus--;
		cout << "Attention, vous n'avez plus que " << essais_perdus << " essai(s)" << endl;
		cout << endl;

		if (essais_perdus == 0)
		{
			cout << "Vous avez utilise tous vos essais, vous avez perdu" << endl;
			break;
		}

		if (reponse == "EUREKA")
		{
			if (start_ia == start_util)
			{
				cout << "Bravo utilisateur!, grace a vous, j'ai devine le nombre!!";
				break;
			}

			if (start_ia != start_util)
			{
				cout << "Ehh, n'essaie pas de tricher, malotru!" << endl;
			}
		}
	}
}

