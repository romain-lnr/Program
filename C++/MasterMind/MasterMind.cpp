#include <iostream>
#include <cmath>
#include <limits>
#include <ctime>

using namespace std;
int compare_exact(int reponse[], int solution[], int nbrdigit);
int compare_chiffre(int reponse[], int solution[], int nbrdigit);

int main() {
	int nbrdigit = 0;
	int nbrchoix = 0;
	int i;
	int nbrejuste = 0;
	int nbresim = 0;
	int reponsetemp;
	bool testreponse;
	int coup = 0;


	while (nbrdigit < 1)
	{
		while ((cout << "Combien de digits possede le code secret : " && !(cin >> nbrdigit)))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	while (nbrchoix > 9 || nbrchoix < 1)
	{
		while ((cout << "Quel est le chiffre maximal du code secret (1-9) : " && !(cin >> nbrchoix)))
		{
			cin.clear();
			cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	}

	int* solution = new int[nbrdigit];
	int* reponse = new int[nbrdigit];

	cout << "Decouvrez un code secret de " << nbrdigit << " chiffres, compose des chiffres 1 a " << nbrchoix << "\n";
	srand(time(NULL));
	for (i = 0; i < nbrdigit; i++)
	{
		solution[i] = rand() % nbrchoix + 1;
	}


	while (nbrejuste < nbrdigit)
	{

		coup++;

		do
		{
			testreponse = true;
			while ((cout << "Code secret : " && !(cin >> reponsetemp)))
			{
				cin.clear();
				cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			}

			for (i = nbrdigit - 1; i >= 0; i--)
			{
				reponse[nbrdigit - 1 - i] = int(reponsetemp / pow(10, i));
				reponsetemp = reponsetemp - reponse[nbrdigit - 1 - i] * pow(10, i);
				if (reponse[nbrdigit - 1 - i] < 1 || reponse[nbrdigit - 1 - i] > nbrchoix)
				{
					testreponse = false;
				}
			}
		} while (!testreponse);

		nbrejuste = compare_exact(reponse, solution, nbrdigit);
		nbresim = compare_chiffre(reponse, solution, nbrdigit);

		cout << "Chiffres bien place(s) " << nbrejuste << " / mal place(s) " << nbresim - nbrejuste << endl;

	}

	cout << "Bravo vous avez trouve la bonne reponse en " << coup << " essai(s)!" << endl;
	delete[] solution;
	delete[] reponse;
	return 0;

}

int compare_exact(int reponse[], int solution[], int nbrdigit)
{
	int i;
	int count = 0;
	for (i = 0; i < nbrdigit; i++)
	{
		if (reponse[i] == solution[i])
		{
			count++;
		}
	}
	return count;
}


int compare_chiffre(int reponse[], int solution[], int nbrdigit)
{
	int i;
	int j;
	int count = 0;

	bool* reponse_utilise = new bool[nbrdigit];

	for (i = 0; i < nbrdigit; i++)
	{
		reponse_utilise[i] = false;
	}

	for (i = 0; i < nbrdigit; i++)
	{
		for (j = 0; j < nbrdigit; j++)
		{
			if (reponse_utilise[j] == false)
			{
				if (solution[i] == reponse[j])
				{
					count++;
					reponse_utilise[j] = true;
					j = nbrdigit;
				}
			}
		}
	}

	delete[] reponse_utilise;
	return count;
}
