using namespace std;
#include <ctime>
#include <iostream>
#include <string>

int main()
{
	srand(time(NULL));
	string bot_choice[4];
	bot_choice[1] = { "Pierre" };
	bot_choice[2] = { "Feuille" };
	bot_choice[3] = { "Ciseaux" };

	string player_choice = "";
	int game;
	int i;
	int ordi_pts = 0;
	int player_pts = 0;
	int accuracy;
	cout << "Combien de parties voulez-vous faire contre cette ordinateur ? : "; cin >> game;
	for (i = 0; i < game; i++)
	{
		int rand_bot_choice = rand() % 3 + 1;

		cout << "Pensez a un mot. Soit Pierre, soit Feuille, soit Ciseaux." << endl;
		cout << "Joueur :"; cin >> player_choice;
		if (rand_bot_choice == 1) cout << "L'ordinateur : " << bot_choice[1] << endl;
		if (rand_bot_choice == 2) cout << "L'ordinateur : " << bot_choice[2] << endl;
		if (rand_bot_choice == 3) cout << "L'ordinateur : " << bot_choice[3] << endl;

		if (player_choice == "Pierre" && rand_bot_choice == 1) cout << "Match nul !" << endl;
		if (player_choice == "Pierre" && rand_bot_choice == 2)
		{
			cout << "L'ordinateur a gagne cette manche !" << endl;
			ordi_pts += 1;
		}
		if (player_choice == "Pierre" && rand_bot_choice == 3)
		{
			cout << "Vous avez gagne cette manche !!" << endl;
			player_pts += 1;
		}

		if (player_choice == "Feuille" && rand_bot_choice == 1)
		{
			cout << "Vous avez gagne cette manche !!" << endl;
			player_pts += 1;
		}
		if (player_choice == "Feuille" && rand_bot_choice == 2) cout << "Match nul !" << endl;
		if (player_choice == "Feuille" && rand_bot_choice == 3)
		{
			cout << "L'ordinateur a gagne cette manche !" << endl;
			ordi_pts += 1;
		}

		if (player_choice == "Ciseaux" && rand_bot_choice == 1)
		{
			cout << "L'ordinateur a gagne cette manche !" << endl;
			ordi_pts += 1;
		}
		if (player_choice == "Ciseaux" && rand_bot_choice == 2)
		{
			cout << "Vous avez gagne cette manche !!" << endl;
			player_pts += 1;
		}
		if (player_choice == "Ciseaux" && rand_bot_choice == 3) cout << "Match nul !" << endl; 

		cout << "Points du joueur : " << player_pts << endl;
		cout << "Points de l'ordi : " << ordi_pts << endl;
	}
	cout << endl << endl;
	//accuracy = 100 / (player_pts / ordi_pts);
	cout << "Resultat des points :" << endl;
	cout << "Points du joueur : " << player_pts << endl;
	cout << "Points du l'ordi : " << ordi_pts << endl;
}

