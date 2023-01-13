using namespace std;
#include <string>
#include <iostream>

int main()
{
    string t[9] = { "t1", "t2", "t3", "t4", "t5", "t6", "t7", "t8", "t9" };
    string j[5];
    string o[4];
    int limit_for = 1;

    cout << "Les règles :" << endl;
    cout << "Pour jouer, il vous faudra remplacer les t[] par vos signes attribues." << endl;
    cout << "O pour le joueur et X pour l'ordi." << endl;
    for (int i = 0; i < limit_for; i++)
    {
        //Le tableau
        cout << "| "; t[1]; cout << "| "; t[2]; cout << "| "; t[3]; cout << "|";
        cout << endl << endl;
        cout << "| t4 | t5 | t6 |";
        cout << endl << endl;
        cout << "| t7 | t8 | t9 |";

        cout << "joueur : O en : "; cin >> j[1];
        while (j[1] == "t1" || "t2" || "t3" || "t4" || "t5" || "t6" || "t7" || "t8" || "t9") j[;
    }
}
