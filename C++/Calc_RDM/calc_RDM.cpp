using namespace std;
#include <string>
#include <iostream>
#include <ctime>
#include <cmath>

int main()
{
	const int max_nbr = 20;
    int max_ques;
	int x, y;
	int op;
	int rep_util, rep;
	int nbr_rep = 0;
	int i;
	bool aleatoire = false;


	cout << "Quel genre d'opperations voulez-vous effectuer ?" << endl;
    cout << "(addition = 1, soustraction = 2, multiplication = 3, division = 4, aleatoire = 5) : ";
	cin >> op;
	if (op == 5) aleatoire = true;
	cout << endl << endl;
	cout << "Combien de calculs voulez-vous effectuer ? ";
	cin >> max_ques;
	cout << endl << endl;
	srand(time(NULL));
	for (i = 1; i <= max_ques; i++)
	{

		x = rand() % max_nbr + 1;
		y = rand() % max_nbr + 1;
		if (aleatoire) op = rand() % 4 + 1;
		if (op == 1)
		{
			rep = x + y;
			cout << "Resolvez ce calcul : " << x << " + " << y << " = ";
		}
		if (op == 2)
		{
			rep = x - y;
			cout << "Resolvez ce calcul : " << x << " - " << y << " = ";
		}
		if (op == 3)
		{
			rep = x * y;
			cout << "Resolvez ce calcul : " << x << " * " << y << " = ";
		}
		if (op == 4)
		{
			rep = x;
			cout << "Resolvez ce calcul : " << x*y << " : " << y << " = ";
		}
		cin >> rep_util;
		

		if (rep_util == rep)
		{
			cout << "Bravo, c'est une bonne reponse" << endl;
			nbr_rep++;
		}
		else
		{
			cout << "C'est une mauvaise reponse, la bonne reponse etait " << rep << endl;
		}
		cout << endl;
	}

	cout << "Vous avez obtenu " << nbr_rep << " bonne(s) reponse(s) sur " << max_ques << " questions " << endl;
}