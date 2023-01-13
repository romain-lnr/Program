
using namespace std;
#include <string>
#include <iostream>

#ifdef _WIN32
#include <windows.h>

void sleep(unsigned seconds)
{
	Sleep(seconds * 1000);
}
#else
#include <chrono>
#include <thread>

void sleep(unsigned seconds)
{
	std::chrono::duration<int, std::milli> timespan(seconds * 1000);
	std::this_thread::sleep_for(timespan);
}
#endif

string chiffre_romain(int chiff_N)
{
	int residu;
	string romain = "";
	residu = chiff_N;

	
	if (residu >= 4000)
	{
		romain += "MMMM";
		residu -= 4000;
	}
	if (residu >= 3000)
	{
		romain += "MMM";
		residu -= 3000;
	}
	if (residu >= 2000)
	{
		romain += "MM";
		residu -= 2000;
	}
	if (residu >= 1000)
	{
		romain += "M";
		residu -= 1000;
	}
	if (residu >= 900)
	{
		romain += "CM";
		residu -= 900;
	}
	if (residu >= 800)
	{
		romain += "DCCC";
		residu -= 800;
	}
	if (residu >= 700)
	{
		romain += "DCC";
		residu -= 700;
	}
	if (residu >= 600)
	{
		romain += "DC";
		residu -= 600;
	}
	if (residu >= 500)
	{
		romain += "D";
		residu -= 500;
	}
	if (residu >= 400)
	{
		romain += "CD";
		residu -= 400;
	}
	if (residu >= 300)
	{
		romain += "CCC";
		residu -= 300;
	}
	if (residu >= 200)
	{
		romain += "CC";
		residu -= 200;
	}
	if (residu >= 100)
	{
		romain += "C";
		residu -= 100;
	}
	if (residu >= 90)
	{
		romain += "XC";
		residu -= 90;
	}
	if (residu >= 80)
	{
		romain += "LXXX";
		residu -= 80;
	}
	if (residu >= 70)
	{
		romain += "LXX";
		residu -= 70;
	}
	if (residu >= 60)
	{
		romain += "LX";
		residu -= 60;
	}
	if (residu >= 50)
	{
		romain += "L";
		residu -= 50;
	}
	if (residu >= 40)
	{
		romain += "XL";
		residu -= 40;
	}
	if (residu >= 30)
	{
		romain += "XXX";
		residu -= 30;
	}
	if (residu >= 20)
	{
		romain += "XX";
		residu -= 20;
	}
	if (residu >= 10)
	{
		romain += "X";
		residu -= 10;
	}
	if (residu >= 9)
	{
		romain += "IX";
		residu -= 9;
	}
	if (residu >= 8)
	{
		romain += "VIII";
		residu -= 8;
	}
	if (residu >= 7)
	{
		romain += "VII";
		residu -= 7;
	}
	if (residu >= 6)
	{
		romain += "VI";
		residu -= 6;
	}
	if (residu >= 5)
	{
		romain += "V";
		residu -= 5;
	}
	if (residu >= 4)
	{
		romain += "IV";
		residu -= 4;
	}
	if (residu >= 3)
	{
		romain += "III";
		residu -= 3;
	}
	if (residu >= 2)
	{
		romain += "II";
		residu -= 2;
	}
	if (residu >= 1)
	{
		romain += "I";
		residu -= 1;
	}
	
	return romain;
}


int main()
{
	int i;
	int n;
	cout << "Choisissez un nombre entier jusqu'a 4999 : ";
	cin >> n;
	cout << "En chiffre romain : " << chiffre_romain(n) << endl;

	//for (i = n; i > 0; i--)
	//{
	//	cout << chiffre_romain(i) << endl;
	//	sleep(1);
	//}
	return 0;
}

