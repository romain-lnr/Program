using namespace std;
#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	int nbre_rand;
	int calc_racines;
	int result_true;
	int result;
	int ques_racines;
	int score = 0;
	int fault = 0;
	int i;

	cout << "Combien voulez-vous de calculs en tout : ";
	cin >> ques_racines;

	for (i = 0; i < ques_racines; i++)
	{
		nbre_rand = rand() % 1000;
		calc_racines = nbre_rand * nbre_rand;
		result_true = sqrt(calc_racines);

		cout << "La racine carree de " << calc_racines << " : ";
		cin >> result;

		score += 10;

		if (result != result_true)
		{
			cout << endl;
			cout << "Ce resultat est faux, la bonne reponse etait " << result_true << endl;
			fault++;
		}

		if (fault == 3)
		{
			cout << endl;
			cout << "Vous avez fait trop de fautes, vous n'avez pas reussi l'examen. " << endl;
			score = 0;
			break;
		}
		cout << endl;
	}
	cout << "Votre score est de " << score << "." << endl;
}
