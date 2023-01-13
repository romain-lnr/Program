
using namespace std;
#include <ctime>
#include <iostream>

	int main()
	{
		int max_ques = 0;
		int i;
		int rep;
		int rep_util = 0;
		int rep_true;

		cout << "Combien voulez-vous de calcul :";
		cin >> max_ques;

		for (i = 1; i <= max_ques; i++)
		{
			srand(time(NULL));
			int number1 = rand() % 100 - 110;
			int number2 = rand() % 100 + 100;

			cout << number1; cout << " + " << number2; cout << " = ";
			cin >> rep;

			rep_true = number1 + number2;

			if (rep_true == rep)
			{
				cout << "Bravo, c'est la bonne reponse " << endl;
				rep_util++;
			}
			else
			{
				cout << "Ce n'est pas la bonne reponse, la bonne reponse etait : " << rep_true << endl;
			}
		}
		cout << "Vous avez eu " << rep_util << " bonne(s) reponse(s) sur " << max_ques;
	}

