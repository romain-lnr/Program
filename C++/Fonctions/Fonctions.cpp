
#include <iostream>
using namespace std;

// type de retour nom(parametres);
int pow_custom(int number, int N)
{
    int result = 1;

    for (int i = 0; i < N; i++)
    {
        result *= number;
    }

    return result;

}
//int addition(int a, int b);
float addition(float a, float b);


int main()
{
    

    cout << pow_custom(2,2) << endl;
    cout << pow_custom(3,3) << endl;
    cout << addition(5.5f, 10.0f) << endl;
    

    return 0;
}

float addition(float a, float b)
{
    return a + b;
}
