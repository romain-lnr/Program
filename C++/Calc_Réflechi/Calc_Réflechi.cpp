using namespace std;
#include <iostream>
#include <ctime>

int main()
{
	srand(time(NULL));
	int number;
	int number_1;
	int number_2;
	float number_3 = 0.0;
	int number_4;
	int number_5;
	int number_6;
	int number_7;
	int number_8;
	int number_9;
	int number_10;
	int number_11;
	int number_12;
	int calcul;
	int number_calc;
	int result;
	int result_true;
	int i;
	int n = 10000;

	for (i = 0; i < n; i++)
	{
		number = rand() % 101;
		number_1 = rand() % 101;
		number_2 = rand() % 101;
		number_3 = number / 10.0;
		number_4 = number * (number_1 + number_2);
		number_5 = number * (number_1 - number_2);
		number_6 = number * (number_1 * number_2);
		number_7 = number * (number_1 / number_2);
		number_8 = number_2 * 26;
		number_9 = number_2 * 33;
		number_10 = number_2 * 67;
		number_11 = number_2 * 3;
		number_12 = number_7 * 15;
		number_calc = rand() % 20 + 1;
		
	
		if (number_calc == 1)
		{
			cout << number << " + " << number_1 << " = ";
			result_true = number + number_1;
		}
		if (number_calc == 2)
		{
			cout << number << " - " << number_1 << " = ";
			result_true = number - number_1;
		}
		if (number_calc == 3)
		{
			cout << number << " x " << number_1 << " = ";
			result_true = number * number_1;
		}
		if (number_calc == 4)
		{
			cout << number << " : " << number_3 << " = ";
			result_true = number / number_3;
		}
		if (number_calc == 5)
		{
			cout << number << " + " << "(" << number_1 << " + " << number_2 << ")" << " = ";
			result_true = number + (number_1 + number_2);
		}
		if (number_calc == 6)
		{
			cout << number << " + " << "(" << number_1 << " - " << number_2 << ")" << " = ";
			result_true = number + (number_1 - number_2);
		}
		if (number_calc == 7)
		{
			cout << number << " + " << "(" << number_1 << " x " << number_2 << ")" << " = ";
			result_true = number + (number_1 * number_2);
		}
		if (number_calc == 8)
		{
			cout << number << " + " << "(" << number_8 << " : " << number_2 << ")" << " = ";
			result_true = number + (number_8 / number_2);
		}
		if (number_calc == 9)
		{
			cout << number << " - " << "(" << number_1 << " + " << number_2 << ")" << " = ";
			result_true = number - (number_1 + number_2);
		}
		if (number_calc == 10)
		{
			cout << number << " - " << "(" << number_1 << " - " << number_2 << ")" << " = ";
			result_true = number - (number_1 - number_2);
		}
		if (number_calc == 11)
		{
			cout << number << " - " << "(" << number_1 << " x " << number_2 << ")" << " = ";
			result_true = number - (number_1 * number_2);
		}
		if (number_calc == 12)
		{
			cout << number << " - " << "(" << number_9 << " : " << number_2 << ")" << " = ";
			result_true = number - (number_9 / number_2);
		}
		if (number_calc == 13)
		{
			cout << number << " x " << "(" << number_1 << " + " << number_2 << ")" << " = ";
			result_true = number * (number_1 + number_2);
		}
		if (number_calc == 14)
		{
			cout << number << " x " << "(" << number_1 << " - " << number_2 << ")" << " = ";
			result_true = number * (number_1 - number_2);
		}
		if (number_calc == 15)
		{
			cout << number << " x " << "(" << number_1 << " x " << number_2 << ")" << " = ";
			result_true = number * (number_1 * number_2);
		}
		if (number_calc == 16)
		{
			cout << number << " x " << "(" << number_10 << " : " << number_2 << ")" << " = ";
			result_true = number * (number_10 / number_2);
		}
		if (number_calc == 17)
		{
			cout << number_4 << " : " << "(" << number_1 << " + " << number_2 << ")" << " = ";
			result_true = number_4 / (number_1 + number_2);
		}
		if (number_calc == 18)
		{
			cout << number_5 << " : " << "(" << number_1 << " - " << number_2 << ")" << " = ";
			result_true = number_5 / (number_1 - number_2);
		}
		if (number_calc == 19)
		{
			cout << number_6 << " : " << "(" << number_1 << " x " << number_2 << ")" << " = ";
			result_true = number_6 / (number_1 * number_2);
		}
		if (number_calc == 20)
		{
			cout << number_12 << " : " << "(" << number_11 << " : " << number_2 << ")" << " = ";
			result_true = number_12 / (number_11 / number_2);
		}

		cin >> result;
	

		if (result != result_true)
		{
	        cout << "C'est faux, la bonne reponse etait " << result_true << endl;
		    break;
		}
	}
}
