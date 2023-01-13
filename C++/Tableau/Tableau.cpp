using namespace std;
#include <iostream>

int main()
{
	int t[10];

	for (int i = 0; i < 10; i++)
	{
		cout << "Entrez votre argument numero " << i + 1 << ".";
		cin >> t[i];
	}
	cout << "argument : " << endl << t[0] << endl << t[1] << endl << t[2] << endl << t[3] << endl << t[4] << endl << t[5] << endl << t[6] << endl << t[7] << endl << t[8] << endl << t[9];
	return 0;
}
