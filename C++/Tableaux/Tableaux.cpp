
using namespace std;
#include <iostream>

void ComputeTable(int table, int output[11])
{
	for (int i = 0; i <= 10; ++i)
	{
		output[i] = i * table;
	}

	// output[0] = 0 * 5;
	// output[1] = 1 * 5;
	// output[2] = 2 * 5;
	// output[3] = 3 * 5;
	//...

	
}

void DisplayTable(int output[11])
{
	for (int i = 0; i <= 10; ++i)
	{
		cout << output[i] << endl;
	}
}

int main()
{
	int table[11] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

	ComputeTable(78, table);
	DisplayTable(table);

	
	

	return 0;
}

