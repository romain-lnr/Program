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


int main()
{
    int jour = 0;
    long long int total_cas = 39015163;
    long long int total_cas_today = 0;
    long long int total_deces = 1099469;
    long long int total_deces_today = 0;
    long long int total_guerisons = 26939337;
    long long int total_guerisons_today = 0;
    long long int etats_unis_cas = 8020104;
    long long int etats_unis_cas_today = 0;
    long long int etats_unis_deces = 217585;
    long long int etats_unis_deces_today = 0;
    long long int etats_unis_guerisons = 3157240;
    long long int etats_unis_guerisons_today = 0;
    long long int france_cas = 809684;
    long long int france_cas_today = 0;
    long long int france_deces = 33125;
    long long int france_deces_today = 0;
    long long int france_guerisons = 104082;
    long long int france_guerisons_today = 0;
    long long int suisse_cas = 65881;
    long long int suisse_cas_today = 0;
    long long int suisse_deces = 1808;
    long long int suisse_deces_today = 0;
    long long int suisse_guerisons = 49800;
    long long int suisse_guerisons_today = 0;
    string corona;
    long long int n = 100000000000000000;
    int i;



    cout << "Bonjour, ceci est une estimation de ce qu'il pourrait etre le COVID-19 " << endl;
    cout << "Dites-moi comment voulez-vous proceder " << endl;
    cout << "(Mondial, Etats-Unis, France, Suisse) : ";
    cin >> corona;

    if (corona == "Mondial")
    {
        for (i = 0; i <= n; i++)
        {
            jour++;
            cout << jour << " ans : ";
            total_cas_today = jour * 269975;
            total_deces_today = jour * 4089;
            total_guerisons_today = jour * 116857;

            cout << "Mondial : " << endl;
            cout << "       cas : " << total_cas + total_cas_today * 365 << endl;
            cout << "     deces : " << total_deces + total_deces_today * 365 << endl;
            cout << " guerisons : " << total_guerisons + total_guerisons_today * 365 << endl;
            cout << endl << endl;



            sleep(1);
        }
    }
    if (corona == "Etats-Unis")
    {
        for (i = 0; i <= n; i++)
        {
            jour++;
            cout << jour << " ans : ";
            etats_unis_cas_today = jour * 65327;
            etats_unis_deces_today = jour * 793;
            etats_unis_guerisons_today = jour * 16861;

            cout << "Etats-Unis : " << endl;
            cout << "       cas : " << etats_unis_cas + etats_unis_cas_today * 365 << endl;
            cout << "     deces : " << etats_unis_deces + etats_unis_deces_today * 365 << endl;
            cout << " guerisons : " << etats_unis_guerisons + etats_unis_guerisons_today * 365 << endl;
            cout << endl << endl;


            sleep(1);
        }
    }
    if (corona == "France")
    {
        for (i = 0; i <= n; i++)
        {
            
                jour++;
                cout << jour << " ans : ";
                france_cas_today = jour * 30621;
                france_deces_today = jour * 88;
                france_guerisons_today = jour * 943;

                cout << "france : " << endl;
                cout << "       cas : " << france_cas + france_cas_today * 365 << endl;
                cout << "     deces : " << france_deces + france_deces_today * 365 << endl;
                cout << " guerisons : " << france_guerisons + france_guerisons_today * 365 << endl;
                cout << endl << endl;


                sleep(1);
            
        }

    }
    if (corona == "Suisse")
    {
        for (i = 0; i <= n; i++)
        {

            jour++;
            cout << jour << " ans : ";
            suisse_cas_today = jour * 1485;
            suisse_deces_today = jour * 3;
            suisse_guerisons_today = jour * 62;

            cout << "Suisse : " << endl;
            cout << "       cas : " << suisse_cas + suisse_cas_today * 365 << endl;
            cout << "     deces : " << suisse_deces + suisse_deces_today * 365 << endl;
            cout << " guerisons : " << suisse_guerisons + suisse_guerisons_today * 365 << endl;
            cout << endl << endl;


            sleep(1);

        }
    }
}

