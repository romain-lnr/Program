
#include <iostream>
#include <cmath>
#include <ctime>
#include <limits>
#include <iomanip>
using namespace std;

int main()
{
	int i;
	double* point = new double[2];
	double distance;
	int count_in = 0;
	int count_out = 0;
	double pi_estim;
	int nbre_iter;

	cout << "Combien d'iterations voulez-vous pour calculer Pi : ";
	cin >> nbre_iter; 
	
	//srand(time(NULL));
	for (i = 0; i < nbre_iter; i++)
	{
		point[0] = (double)rand() / RAND_MAX;
		point[1] = (double)rand() / RAND_MAX;
		
		distance = point[0] * point[0] + point[1] * point[1];

		if (distance <= 1.0)
		{
			count_in++;
		}
		else
		{
			count_out++;
		}
		//pi_estim = (double)4 * count_in / (count_in + count_out);
		//cout << setprecision(17) << pi_estim << endl;
	}
	pi_estim = (double) 4 * count_in / (count_in + count_out);
	cout << setprecision(17) << pi_estim << endl;
	delete[] point;
	return 0;
}

