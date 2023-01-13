using namespace std;

#include <string>
#include <ctime>
#include <iostream>
#include <string>

int main()
{
	srand(time(NULL));
	string name1, name2;
	int proba = rand() % 100 + 1;
	string x;
	cout << "Entrez un love matcher : " << endl;
	cin >> name1 >> x >> name2;
	cout << name1 << " et" << name2 << " sont compatibles a " << proba << " %";
	return 0;
}