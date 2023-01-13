using namespace std;
#include <fstream>
#include <iostream>

int main()
{
	int times = 1;
    long double nbre;
	long double divide = 1.001;
	long double result;
	int i;
	int lmte = 1000000;

	cout << "Quel nombre voulez-vous eteindre : ";
	cin >> nbre;

	for (i = 0; i < lmte; i++)
	{
		result = nbre * divide;

		cout << times << " : " << nbre << " x " << divide << " = " << result << endl;

		nbre *= divide;
		times++;

	}
}
