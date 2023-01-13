using namespace std;
#include <string>
#include <iostream>
#include <cmath>
#include <ctime>

char alphabet_password_F(int password)
{
	if (password == 1) return 'a';
	if (password == 2) return 'b';
	if (password == 3) return 'c';
	if (password == 4) return 'd';
	if (password == 5) return 'e';
	if (password == 6) return 'f';
	if (password == 7) return 'g';
	if (password == 8) return 'h';
	if (password == 9) return 'i';
	if (password == 10) return 'j';
	if (password == 11) return 'k';
	if (password == 12) return 'l';
	if (password == 13) return 'm';
	if (password == 14) return 'n';
	if (password == 15) return 'o';
	if (password == 16) return 'p';
	if (password == 17) return 'q';
	if (password == 18) return 'r';
	if (password == 19) return 's';
	if (password == 20) return 't';
	if (password == 21) return 'u';
	if (password == 22) return 'v';
	if (password == 23) return 'w';
	if (password == 24) return 'x';
	if (password == 25) return 'y';
	if (password == 26) return 'z';
	if (password == 27) return 'A';
	if (password == 28) return 'B';
	if (password == 29) return 'C';
	if (password == 30) return 'D';
	if (password == 31) return 'E';
	if (password == 32) return 'F';
	if (password == 33) return 'G';
	if (password == 34) return 'H';
	if (password == 35) return 'I';
	if (password == 36) return 'J';
	if (password == 37) return 'K';
	if (password == 38) return 'L';
	if (password == 39) return 'M';
	if (password == 40) return 'N';
	if (password == 41) return 'O';
	if (password == 42) return 'P';
	if (password == 43) return 'Q';
	if (password == 44) return 'R';
	if (password == 45) return 'S';
	if (password == 46) return 'T';
	if (password == 47) return 'U';
	if (password == 48) return 'V';
	if (password == 49) return 'W';
	if (password == 50) return 'X';
	if (password == 51) return 'Y';
	if (password == 52) return 'Z';
	if (password == 53) return '0';
	if (password == 54) return '1';
	if (password == 55) return '2';
	if (password == 56) return '3';
	if (password == 57) return '4';
	if (password == 58) return '5';
	if (password == 59) return '6';
	if (password == 60) return '7';
	if (password == 61) return '8';
	if (password == 62) return '9';

}
int main()
{

	const int nbr_car = 62;
	const string password = "Romain21";
	int size_pswd, i;
	string test_password;
	size_pswd = password.length();
	test_password.resize(size_pswd);
	cout << test_password;

	srand(time(NULL));
	
	while (password.compare(test_password) != 0)
	{
		for (i = 0; i < size_pswd; i++)
		{
			test_password[i] = alphabet_password_F(rand() % nbr_car + 1);
		}

	}

	if (test_password == password)
	{
		cout << "your password is " << test_password << endl;
	}

	return 0;
}