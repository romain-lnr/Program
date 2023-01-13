// Binaire.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>  
using namespace std;
int main()
{
    int *a;
    int n, i;
    cout << "Entrer le nombre decimal a convertir: ";
    cin >> n;
    a = new int[100];
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "En binaire: ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << a[i];
    }
    delete[] a;
}