using namespace std;
#include <string>
#include <iostream>

char alphabet_password_F(int password)
{
	if (password == 1) return 'A';
	if (password == 2) return 'B';
	if (password == 3) return 'C';
	if (password == 4) return 'D';
	if (password == 5) return 'E';
	if (password == 6) return 'F';
	if (password == 7) return 'G';
	if (password == 8) return 'H';
	if (password == 9) return 'I';
	if (password == 10) return 'J';
	if (password == 11) return 'K';
	if (password == 12) return 'L';
	if (password == 13) return 'M';
	if (password == 14) return 'N';
	if (password == 15) return 'O';
	if (password == 16) return 'P';
	if (password == 17) return 'Q';
	if (password == 18) return 'R';
	if (password == 19) return 'S';
	if (password == 20) return 'T';
	if (password == 21) return 'U';
	if (password == 22) return 'V';
	if (password == 23) return 'W';
	if (password == 24) return 'X';
	if (password == 25) return 'Y';
	if (password == 26) return 'Z';
	

}
int main()
{
	
	const int nbr_car = 26;
	const string password = "HBDHBDHHJSK";
	string test_password= "????";
	int i1, i2, i3, i4;
		
	
	
	
	for (i1 = 1; i1 <= nbr_car; i1++)
	{
		test_password[0] = alphabet_password_F(i1);
		for (i2 = 1; i2 <= nbr_car; i2++)
		{
			test_password[1] = alphabet_password_F(i2);
			for (i3 = 1; i3 <= nbr_car; i3++)
			{
				test_password[2] = alphabet_password_F(i3);
				for (i4 = 1; i4 <= nbr_car; i4++)
				{
					test_password[3] = alphabet_password_F(i4);
					//cout << test_password << endl;
					if (password.compare(test_password) == 0) break;
				}
				if (password.compare(test_password) == 0) break;
			}
			if (password.compare(test_password) == 0) break;
		}
		if (password.compare(test_password) == 0) break;
	}
		
		
	

	if (test_password == password)
	{
		cout << "your password is " << test_password << endl;
	}

	return 0;
}