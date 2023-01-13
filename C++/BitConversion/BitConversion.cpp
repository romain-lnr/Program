#include <iostream>
#include <bitset>
using namespace std;
void decToHexa(int n)
{
    char hexaDeciNum[100];
    int i = 0;
    while (n != 0) {
        int temp = 0;
        temp = n % 16;
        if (temp < 10) {
            hexaDeciNum[i] = temp + 48;
            i++;
        }
        else {
            hexaDeciNum[i] = temp + 55;
            i++;
        }

        n = n / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        cout << hexaDeciNum[j];
}
int main()
{
    //Decimal\Binaire
    int nbr_decimal;
    cout << "Nombre decimal : "; cin >> nbr_decimal; cout << endl;
    cout << "Conversions : " << endl;
    cout << "En binaire : ";
    string binary = bitset<30>(nbr_decimal).to_string();
    cout << binary << "\n";

    //Decimal\hexadecimal
    cout << "En hexadecimal : ";
    decToHexa(nbr_decimal);
    return 0;
}