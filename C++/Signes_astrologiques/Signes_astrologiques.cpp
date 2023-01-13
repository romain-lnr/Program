using namespace std;
#include <iostream>
#include <string>


int mois_char_int(string mois_char)
{
    if (mois_char == "Janvier")   return 1;
    if (mois_char == "Fevrier")   return 2;
    if (mois_char == "Mars")      return 3;
    if (mois_char == "Avril")     return 4;
    if (mois_char == "Mai")       return 5;
    if (mois_char == "Juin")      return 6;
    if (mois_char == "Juillet")   return 7;
    if (mois_char == "Aout")      return 8;
    if (mois_char == "Septembre") return 9;
    if (mois_char == "Octobre")   return 10;
    if (mois_char == "Novembre")  return 11;
    if (mois_char == "Decembre")  return 12;

}


int main()
{
    string mois_char;
    int mois = 0;
    int jour = 0;
    cout << "Bonjour, nous allons determiner votre signe astrologique" << endl;
    //cout << "veuillez entrer votre mois :";
    //cin >> mois;

 
        cout << "Veuillez entrer votre mois : ";
        cin >> mois_char;
  
   

    mois = mois_char_int(mois_char);

    

    
    while (jour > 31 || jour < 1)
    {
        while ((cout << "Veuillez entrer le jour de votre mois : " && !(cin >> jour)))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }
        if (mois == 1 && jour < 20 || mois == 12 && jour > 22)
        {
            cout << "Vous etes Capricorne" << endl;
        }
        else if (mois == 2 && jour < 19 || mois == 1 && jour > 21)
        {
            cout << "Vous etes Verseau" << endl;
        }
        else if (mois == 3 && jour < 20 || mois == 2 && jour > 20)
        {
            cout << "Vous etes Poisson" << endl;
        }
        else if (mois == 4 && jour < 20 || mois == 3 && jour > 21)
        {
            cout << "Vous etes Belier" << endl;
        }
        else if (mois == 5 && jour < 21 || mois == 4 && jour > 21)
        {
            cout << "Vous etes Taureau" << endl;
        }
        else if (mois == 6 && jour < 21 || mois == 5 && jour > 22)
        {
            cout << "Vous etes Gemeaux" << endl;
        }
        else if (mois == 7 && jour < 22 || mois == 6 && jour > 22)
        {
            cout << "Vous etes Cancer" << endl;
        }
        else if (mois == 8 && jour < 22 || mois == 7 && jour > 23)
        {
            cout << "Vous etes Lion" << endl;
        }
        else if (mois == 9 && jour < 22 || mois == 8 && jour > 23)
        {
            cout << "Vous etes Vierge" << endl;
        }
        else if (mois == 10 && jour < 22 || mois == 9 && jour > 23)
        {
            cout << "Vous etes Balance" << endl;
        }
        else if (mois == 11 && jour < 22 || mois == 10 && jour > 23)
        {
            cout << "Vous etes Scorpion" << endl;
        }
        else if (mois == 12 && jour < 21 || mois == 11 && jour > 23)
        {
            cout << "Vous etes Sagittaire" << endl;
        }
        return 0;
}
        

