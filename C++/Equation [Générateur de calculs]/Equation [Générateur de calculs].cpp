using namespace std;

#include <string>
#include <ctime>
#include <iostream>

int main()
{
	srand(time(NULL));
	int x = 0;
	int x_2 = 0;
	int y = 0;
	int y_2 = 0;
	int additionnant = 0;
	int more_add = 0;
	double x_number = 0.00;
	double y_number = 0.00;
	double result_x = 0.00;
	double result_y = 0.00;
	double x_result;
	double y_result;
	int rand_xy = 0;
	int rand_calc = 0;
	int result;
	int result_true;
	double sup_plus_x;
	double sup_moins_x;
	double sup_plus_y;
	double sup_moins_y;
	int limit_for = 10000;
	int i;

	cout << "Voulez-vous des equations a un inconnu ou a deux inconnus ( 1=inconnu | 2 = deux inconnus) : ";
	cin >> rand_xy;
	cout << "Caluculatrice AUTORISEE" << endl;

	for (i = 0; i <= limit_for; i++)
	{
		rand_calc = rand() % 20 + 1;
		x = rand() % 100 + 1;
		x_2 = rand() % 100 + 1;
		y = rand() % 100 + 1;
		y_2 = rand() % 100 + 1;
		x_number = rand() % 10000 + 1;
		additionnant = rand() % 100 + 1;
		more_add = rand() % 100 + 1;
		result_x = x_number / x;
		result_y = x_number - (result_x * x) / y;
		sup_plus_x = result_x + .5;
		sup_moins_x = result_x - .5;
		sup_plus_y = result_y + .5;
		sup_moins_y = result_y - .5;

		cout << "Trouvez les inconnus." << endl;

		if (rand_xy == 1)
		{
			if (rand_calc == 1)
			{
				cout << "Calcul : ";
				cout << x << "x = " << x_number << endl;
				cout << "----------------------------------" << endl;
				cout << "x = ";
				cin >> result;
				cout << endl << endl;

				if (result <= sup_plus_x && result >= sup_moins_x)
				{
					cout << "Vous avez trouve x, bravo!!!" << endl;
					cout << "La valeur exacte de x est : " << result_x << "." << endl;
					cout << endl << endl;
					//break;
				}
				else
				{
					cout << "Ce chiffre est incorrect, la bonne reponse etait " << result_x << endl;
					cout << endl << endl;
					//break;
				}
			}

			if (rand_calc == 2)
			{
				x_number = x_number + additionnant;
				cout << "Calcul : ";
				cout << x << "x + " << additionnant << " = " << x_number << endl;
				cout << "----------------------------------" << endl;
				cout << "x = ";
				cin >> result;
				cout << endl << endl;

				if (result <= sup_plus_x && result >= sup_moins_x)
				{
					cout << "Vous avez trouve x, bravo!!!" << endl;
					cout << "La valeur exacte de x est : " << result_x << "." << endl;
					cout << endl << endl;
					//break;
				}
				else
				{
					cout << "Ce chiffre est incorrect, la bonne reponse etait " << result_x << endl;
					cout << endl << endl;
					//break;
				}
			}

			if (rand_calc == 3)
			{
				x_number = x_number - additionnant;
				cout << "Calcul : ";
				cout << x << "x - " << additionnant << " = " << x_number << endl;
				cout << "----------------------------------" << endl;
				cout << "x = ";
				cin >> result;
				cout << endl << endl;

				if (result <= sup_plus_x && result >= sup_moins_x)
				{
					cout << "Vous avez trouve x, bravo!!!" << endl;
					cout << "La valeur exacte de x est : " << result_x << "." << endl;
					cout << endl << endl;

					//break;
				}
				else
				{
					cout << "Ce chiffre est incorrect, la bonne reponse etait " << result_x << endl;
					cout << endl << endl;
					//break;
				}
			}

			if (rand_calc == 4)
			{
				x_number = x_number + additionnant;
				x_number = x_number + more_add;
				cout << "Calcul : ";
				cout << x << "x + " << additionnant << " = " << x_number << " + " << more_add << endl;
				cout << "----------------------------------" << endl;
				cout << "x = ";
				cin >> result;
				cout << endl << endl;

				if (result <= sup_plus_x && result >= sup_moins_x)
				{
					cout << "Vous avez trouve x, bravo!!!" << endl;
					cout << "La valeur exacte de x est : " << result_x << "." << endl;
					cout << endl << endl;
					//break;
				}
				else
				{
					cout << "Ce chiffre est incorrect, la bonne reponse etait " << result_x << endl;
					cout << endl << endl;
					//break;
				}
			}

			if (rand_calc == 5)
			{
				x_number = x_number - additionnant;
				x_number = x_number - more_add;
				cout << "Calcul : ";
				cout << x << "x - " << additionnant << " = " << x_number << " - " << more_add << endl;
				cout << "----------------------------------" << endl;
				cout << "x = ";
				cin >> result;
				cout << endl << endl;

				if (result <= sup_plus_x && result >= sup_moins_x)
				{
					cout << "Vous avez trouve x, bravo!!!" << endl;
					cout << "La valeur exacte de x est : " << result_x << "." << endl;
					cout << endl << endl;
					//break;
				}
				else
				{
					cout << "Ce chiffre est incorrect, la bonne reponse etait " << result_x << endl;
					cout << endl << endl;
					//break;
				}
			}


			if (rand_calc == 6)
			{
				x_number = x_number + additionnant;
				x_number = x_number - more_add;
				cout << "Calcul : ";
				cout << x << "x + " << additionnant << " = " << x_number << " - " << more_add << endl;
				cout << "----------------------------------" << endl;
				cout << "x = ";
				cin >> result;
				cout << endl << endl;

				if (result <= sup_plus_x && result >= sup_moins_x)
				{
					cout << "Vous avez trouve x, bravo!!!" << endl;
					cout << "La valeur exacte de x est : " << result_x << "." << endl;
					cout << endl << endl;
					//break;
				}
				else
				{
					cout << "Ce chiffre est incorrect, la bonne reponse etait " << result_x << endl;
					cout << endl << endl;
					//break;
				}
			}
		}

			if (rand_xy == 2)
			{
				if (rand_calc == 1)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y);
					x_number = (x * result_x) + (y * result_y);

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;
						
					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;
						
					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}	

				if (rand_calc == 2)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y);
					x_number = (x * result_x) - (y * result_y);

					cout << "calcul : " << endl;
					cout << x << "x - " << y << "y = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 3)
				{
					y_number = (x_2 * result_x) - (y_2 * result_y);
					x_number = (x * result_x) + (y * result_y);

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y = " << x_number << endl;
					cout << x_2 << "x - " << y_2 << "y = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 4)
				{
					y_number = (x_2 * result_x) - (y_2 * result_y);
					x_number = (x * result_x) - (y * result_y);

					cout << "calcul : " << endl;
					cout << x << "x - " << y << "y = " << x_number << endl;
					cout << x_2 << "x - " << y_2 << "y = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 5)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y);
					x_number = (x * result_x) + (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 6)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) + more_add;
					x_number = (x * result_x) + (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 7)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) + more_add;
					x_number = (x * result_x) + (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 8)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) - more_add;
					x_number = (x * result_x) + (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 9)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) - more_add;
					x_number = (x * result_x) + (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 10)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y);
					x_number = (x * result_x) + (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 11)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) + more_add;
					x_number = (x * result_x) + (y * result_y);

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 12)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) - more_add;
					x_number = (x * result_x) + (y * result_y);

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 13)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) + more_add;
					x_number = (x * result_x) - (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x - " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 14)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) + more_add;
					x_number = (x * result_x) - (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x - " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 15)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) - more_add;
					x_number = (x * result_x) - (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x - " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 16)
				{
					y_number = (x_2 * result_x) + (y_2 * result_y) - more_add;
					x_number = (x * result_x) - (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x - " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x + " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}

				if (rand_calc == 17)
				{
					y_number = (x_2 * result_x) - (y_2 * result_y) + more_add;
					x_number = (x * result_x) + (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x - " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 18)
				{
					y_number = (x_2 * result_x) - (y_2 * result_y) + more_add;
					x_number = (x * result_x) + (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x - " << y_2 << "y + " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 19)
				{
					y_number = (x_2 * result_x) - (y_2 * result_y) - more_add;
					x_number = (x * result_x) + (y * result_y) + additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y + " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x - " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;

					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}


				if (rand_calc == 20)
				{
					y_number = (x_2 * result_x) - (y_2 * result_y) - more_add;
					x_number = (x * result_x) + (y * result_y) - additionnant;

					cout << "calcul : " << endl;
					cout << x << "x + " << y << "y - " << additionnant << " = " << x_number << endl;
					cout << x_2 << "x - " << y_2 << "y - " << more_add << " = " << y_number << endl;
					cout << "----------------------------------" << endl;
					cout << "x = ";
					cin >> x_result;
					cout << endl;
					cout << "y = ";
					cin >> y_result;
					cout << endl << endl;


					if (x_result <= sup_plus_x && x_result >= sup_moins_x)
					{
						cout << "Vous avez trouve x, bravo!!!" << endl;
						cout << "La valeur exacte de x est : " << result_x << "." << endl;
						cout << endl << endl;

					}
					else
					{
						cout << "L'inconnu x est incorrect, la bonne reponse etait " << result_x << endl;
						cout << endl << endl;

					}

					if (y_result <= sup_plus_y && y_result >= sup_moins_y)
					{
						cout << "Vous avez trouve y, bravo!!!" << endl;
						cout << "La valeur exacte de y est : " << result_y << "." << endl;
						cout << endl << endl;
						//break;
					}
					else
					{
						cout << "L'inconnu y est incorrect, la bonne reponse etait " << result_y << endl;
						cout << endl << endl;
						//break;
					}
				}
		    }
	}
}
