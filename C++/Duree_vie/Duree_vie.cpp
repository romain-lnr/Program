using namespace std;
#include <iostream>
#include <string>

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
	int calcul;
	int calcul_1;
	int calcul_2;
	int calcul_3;
	int bissextile = 0;
	int sup = 0;
	int age = 0;
	int jour = 365;
	int jour_sup = 0;
	int jour_sup1 = 0;
	int jour_sup_calcul = 0;
	int heure = 24;
	int heure_sup = 0;
	int heure_sup_calcul = 0;
	int heure_local = 0;
	int heure_naissance = 0;
	int minute = 60;
	int minute_sup = 0;
	int minute_sup_calcul = 0;
	int minute_local = 0;
	int minute_naissance = 0;
	int seconde = 60;
	int seconde_sup = 0;
	int seconde_sup_calcul = 0;
	int seconde_local = 0;
	int seconde_naissance = 0;
	int bissextile_j = 0;
	int bissextile_h = 0;
	int bissextile_m = 0;
	int bissextile_s = 0;
	int sup_j = 0;
	int sup_h = 0;
	int sup_m = 0;
	int sup_s = 0;
	int nbr_date = 0;
	int nbr_date1 = 0;
	string mois_date = "";
	string mois_date1 = "";
	string ans = "";
	string heures = "";
	string et = "";
	string precision;
	int j;
	int h;
	int m;
	int s;


	cout << "bonjour, ceci est un programme pour determiner ce que vous avez vecu en temps normal dans votre vie : " << endl;
	cout << endl << endl;

	cout << "Tout d'abord, choisissez comment je dois soumettre cette hypothese " << endl;
	cout << "(Jours, Heures, Minutes, Secondes, All) : ";
	cin >> precision;

	cout << "Ensuite, donnez-moi votre age (x ans): ";
	cin >> age >> ans;

	cout << "Puis, donnez-moi votre date de naissance : ";
	cin >> nbr_date >> mois_date;

	if (mois_date == "janvier")
	{
		jour_sup = nbr_date;
	}
	if (mois_date == "fevrier")
	{
		jour_sup = nbr_date + 31;
	}
	if (mois_date == "mars")
	{
		jour_sup = nbr_date + 59;
	}
	if (mois_date == "avril")
	{
		jour_sup = nbr_date + 90;
	}
	if (mois_date == "mai")
	{
		jour_sup = nbr_date + 120;
	}
	if (mois_date == "juin")
	{
		jour_sup = nbr_date + 151;
	}
	if (mois_date == "juillet")
	{
		jour_sup = nbr_date + 181;
	}
	if (mois_date == "aout")
	{
		jour_sup = nbr_date + 212;
	}
	if (mois_date == "septembre")
	{
		jour_sup = nbr_date + 243;
	}
	if (mois_date == "octobre")
	{
		jour_sup = nbr_date + 273;
	}
	if (mois_date == "novembre")
	{
		jour_sup = nbr_date + 304;
	}
	if (mois_date == "decembre")
	{
		jour_sup = nbr_date + 334;
	}
	cout << "Enfin, donnez-moi la date d'aujourd'hui : ";
	cin >> nbr_date1 >> mois_date1;

	if (mois_date1 == "janvier")
	{
		jour_sup1 = nbr_date1;
	}
	if (mois_date1 == "fevrier")
	{
		jour_sup1 = nbr_date1 + 31;
	}
	if (mois_date1 == "mars")
	{
		jour_sup1 = nbr_date1 + 59;
	}
	if (mois_date1 == "avril")
	{
		jour_sup1 = nbr_date1 + 90;
	}
	if (mois_date1 == "mai")
	{
		jour_sup1 = nbr_date1 + 120;
	}
	if (mois_date1 == "juin")
	{
		jour_sup1 = nbr_date1 + 151;
	}
	if (mois_date1 == "juillet")
	{
		jour_sup1 = nbr_date1 + 181;
	}
	if (mois_date1 == "aout")
	{
		jour_sup1 = nbr_date1 + 212;
	}
	if (mois_date1 == "septembre")
	{
		jour_sup1 = nbr_date1 + 243;
	}
	if (mois_date1 == "octobre")
	{
		jour_sup1 = nbr_date1 + 273;
	}
	if (mois_date1 == "novembre")
	{
		jour_sup1 = nbr_date1 + 304;
	}
	if (mois_date1 == "decembre")
	{
		jour_sup1 = nbr_date1 + 334;
	}

	if (precision == "Jours")
	{

		if (age >= 4) bissextile = 1;
		if (age >= 8) bissextile = 2;
		if (age >= 12) bissextile = 3;
		if (age >= 16) bissextile = 4;
		if (age >= 20) bissextile = 5;
		if (age >= 24) bissextile = 6;
		if (age >= 28) bissextile = 7;
		if (age >= 32) bissextile = 8;
		if (age >= 36) bissextile = 9;
		if (age >= 40) bissextile = 10;
		if (age >= 44) bissextile = 11;
		if (age >= 48) bissextile = 12;
		if (age >= 52) bissextile = 13;
		if (age >= 56) bissextile = 14;
		if (age >= 60) bissextile = 15;
		if (age >= 64) bissextile = 16;
		if (age >= 68) bissextile = 17;
		if (age >= 72) bissextile = 18;
		if (age >= 76) bissextile = 19;
		if (age >= 80) bissextile = 20;
		if (age >= 84) bissextile = 21;
		if (age >= 88) bissextile = 22;
		if (age >= 92) bissextile = 23;
		if (age >= 96) bissextile = 24;
		if (age >= 100) bissextile = 25;
		if (age >= 104) bissextile = 26;
		if (age >= 108) bissextile = 27;
		if (age >= 112) bissextile = 28;
		if (age >= 116) bissextile = 29;
		if (age >= 120) bissextile = 30;

		sup = 1;

		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;
			calcul = age * jour + jour_sup_calcul + bissextile + sup;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
				calcul = age * jour + jour_sup_calcul + bissextile + sup;
			}

		}

		cout << "Nous en avons fini, en effet vous avez vecu " << calcul << " jours" << endl;


		for (j = calcul + 1; j >= 0; j++)
		{
			cout << "Maintenant, vous en avez " << j - 1 << " jours";
			sleep(86400);

		}

	}

	if (precision == "Heures")
	{
		if (age >= 4) bissextile = 24;
		if (age >= 8) bissextile = 48;
		if (age >= 12) bissextile = 72;
		if (age >= 16) bissextile = 96;
		if (age >= 20) bissextile = 120;
		if (age >= 24) bissextile = 144;
		if (age >= 28) bissextile = 168;
		if (age >= 32) bissextile = 192;
		if (age >= 36) bissextile = 216;
		if (age >= 40) bissextile = 240;
		if (age >= 44) bissextile = 264;
		if (age >= 48) bissextile = 288;
		if (age >= 52) bissextile = 312;
		if (age >= 56) bissextile = 336;
		if (age >= 60) bissextile = 360;
		if (age >= 64) bissextile = 384;
		if (age >= 68) bissextile = 408;
		if (age >= 72) bissextile = 432;
		if (age >= 76) bissextile = 456;
		if (age >= 80) bissextile = 480;
		if (age >= 84) bissextile = 504;
		if (age >= 88) bissextile = 528;
		if (age >= 92) bissextile = 552;
		if (age >= 96) bissextile = 576;
		if (age >= 100) bissextile = 600;
		if (age >= 104) bissextile = 624;
		if (age >= 108) bissextile = 648;
		if (age >= 112) bissextile = 672;
		if (age >= 116) bissextile = 696;
		if (age >= 120) bissextile = 720;

		sup = 24;

		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
			}

		}

		heure_sup = jour_sup_calcul * 24;


		cout << "Nous en avons presque fini, donnez-moi votre heure de naissance(x heure) : ";
		cin >> heure_naissance >> heures;


		cout << "Enfin, donnez-moi l'heure d'aujourd'hui(x heure) : ";
		cin >> heure_local >> heures;


		jour_sup_calcul = jour_sup1 - jour_sup;
		heure_sup_calcul = heure_local - heure_naissance;
		calcul = age * jour * heure + heure_sup + heure_sup_calcul + bissextile + sup;

		if (jour_sup_calcul <= 0)
		{
			heure_sup_calcul = heure_local - heure_naissance;
			jour_sup_calcul = jour_sup1 - jour_sup + 365;
			calcul = age * jour * heure + heure_sup + heure_sup_calcul + bissextile + sup;

			if (jour_sup_calcul >= 365)
			{
				heure_sup_calcul = heure_local - heure_naissance;
				jour_sup_calcul = jour_sup1 - jour_sup;
				calcul = age * jour * heure + heure_sup + heure_sup_calcul + bissextile + sup;
			}

		}


		cout << "Nous en avons fini, en effet vous avez vecu " << calcul << " heures" << endl;

		for (h = calcul + 1; h >= 0; h++)
		{
			cout << "Maintenant, vous en avez " << h - 1 << " heures" << endl;
			sleep(3600);

		}
	}

	if (precision == "Minutes")
	{

		if (age >= 4) bissextile = 1440;
		if (age >= 8) bissextile = 2880;
		if (age >= 12) bissextile = 4320;
		if (age >= 16) bissextile = 5760;
		if (age >= 20) bissextile = 7200;
		if (age >= 24) bissextile = 8640;
		if (age >= 28) bissextile = 10080;
		if (age >= 32) bissextile = 11520;
		if (age >= 36) bissextile = 12960;
		if (age >= 40) bissextile = 14400;
		if (age >= 44) bissextile = 15840;
		if (age >= 48) bissextile = 17280;
		if (age >= 52) bissextile = 18720;
		if (age >= 56) bissextile = 20160;
		if (age >= 60) bissextile = 21600;
		if (age >= 64) bissextile = 23040;
		if (age >= 68) bissextile = 24480;
		if (age >= 72) bissextile = 25920;
		if (age >= 76) bissextile = 27360;
		if (age >= 80) bissextile = 28800;
		if (age >= 84) bissextile = 30240;
		if (age >= 88) bissextile = 31680;
		if (age >= 92) bissextile = 33120;
		if (age >= 96) bissextile = 34560;
		if (age >= 100) bissextile = 36000;
		if (age >= 104) bissextile = 37440;
		if (age >= 108) bissextile = 38880;
		if (age >= 112) bissextile = 40320;
		if (age >= 116) bissextile = 41760;
		if (age >= 120) bissextile = 43200;

		sup = 1440;

		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
			}

		}

		minute_sup = jour_sup_calcul * 1440;


		cout << "Nous en avons presque fini, donnez-moi votre heure de naissance(x : x) [/2 par defaut] : ";
		cin >> heure_naissance >> et >> minute_naissance;


		minute_naissance = heure_naissance * 60 + minute_naissance;

		cout << "Enfin, donnez-moi l'heure d'aujourd'hui(x : x) [/2 par defaut] : ";
		cin >> heure_local >> et >> minute_local;


		minute_local = heure_local * 60 + minute_local;



		jour_sup_calcul = jour_sup1 - jour_sup;
		minute_sup_calcul = minute_local - minute_naissance;
		calcul = age * jour * heure * minute + minute_sup + minute_sup_calcul + bissextile + sup;

		if (jour_sup_calcul < 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;
			calcul = age * jour * heure * minute + minute_sup + minute_sup_calcul + bissextile + sup;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
				calcul = age * jour * heure * minute + minute_sup + minute_sup_calcul + bissextile + sup;
			}

		}


		cout << "Nous en avons fini, en effet vous avez vecu " << calcul << " minutes" << endl;

		for (m = calcul + 1; m >= 0; m++)
		{
			cout << "Maintenant, vous en avez " << m - 1 << " minutes" << endl;
			sleep(60);

		}
	}

	if (precision == "Secondes")
	{
		if (age >= 4) bissextile = 86400;
		if (age >= 8) bissextile = 172800;
		if (age >= 12) bissextile = 259200;
		if (age >= 16) bissextile = 345600;
		if (age >= 20) bissextile = 432000;
		if (age >= 24) bissextile = 518400;
		if (age >= 28) bissextile = 604800;
		if (age >= 32) bissextile = 691200;
		if (age >= 36) bissextile = 777600;
		if (age >= 40) bissextile = 864000;
		if (age >= 44) bissextile = 950400;
		if (age >= 48) bissextile = 1036800;
		if (age >= 52) bissextile = 1123200;
		if (age >= 56) bissextile = 1209600;
		if (age >= 60) bissextile = 1296000;
		if (age >= 64) bissextile = 1382400;
		if (age >= 68) bissextile = 1468800;
		if (age >= 72) bissextile = 1555200;
		if (age >= 76) bissextile = 1641600;
		if (age >= 80) bissextile = 1728000;
		if (age >= 84) bissextile = 1814400;
		if (age >= 88) bissextile = 1900800;
		if (age >= 92) bissextile = 1987200;
		if (age >= 96) bissextile = 2073600;
		if (age >= 100) bissextile = 2160000;
		if (age >= 104) bissextile = 2246400;
		if (age >= 108) bissextile = 2332800;
		if (age >= 112) bissextile = 2419200;
		if (age >= 116) bissextile = 2505600;
		if (age >= 120) bissextile = 2592000;

		sup = 86425;

		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
			}

		}

		seconde_sup = jour_sup_calcul * 86400;


		cout << "Nous en avons presque fini, donnez-moi votre heure de naissance(x : x : x) [/2 par defaut] : ";
		cin >> heure_naissance >> et >> minute_naissance >> et >> seconde_naissance;


		seconde_naissance = heure_naissance * 3600;
		seconde_naissance = minute_naissance * 60 + seconde_naissance;

		cout << "Enfin, donnez-moi l'heure d'aujourd'hui(x : x : x) [/2 par defaut] : ";
		cin >> heure_local >> et >> minute_local >> et >> seconde_local;


		seconde_local = heure_local * 3600;
		seconde_local = minute_local * 60 + seconde_local;


		jour_sup_calcul = jour_sup1 - jour_sup;
		seconde_sup_calcul = seconde_local - seconde_naissance;
		calcul = age * jour * heure * minute * seconde + seconde_sup + seconde_sup_calcul + bissextile + sup;

		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;
			calcul = age * jour * heure * minute * seconde + seconde_sup + seconde_sup_calcul + bissextile + sup;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
				calcul = age * jour * heure * minute * seconde + seconde_sup + seconde_sup_calcul + bissextile + sup;
			}

		}

		cout << "Nous en avons fini, en effet vous avez vecu " << calcul << " secondes" << endl;

		for (s = calcul + 1; s >= 0; s++)
		{
			cout << "Maintenant, vous en avez " << s - 1 << " secondes" << endl;
			sleep(1);

		}
	}

	if (precision == "All")
	{
		if (age >= 4) bissextile_j = 1;
		if (age >= 8) bissextile_j = 2;
		if (age >= 12) bissextile_j = 3;
		if (age >= 16) bissextile_j = 4;
		if (age >= 20) bissextile_j = 5;
		if (age >= 24) bissextile_j = 6;
		if (age >= 28) bissextile_j = 7;
		if (age >= 32) bissextile_j = 8;
		if (age >= 36) bissextile_j = 9;
		if (age >= 40) bissextile_j = 10;
		if (age >= 44) bissextile_j = 11;
		if (age >= 48) bissextile_j = 12;
		if (age >= 52) bissextile_j = 13;
		if (age >= 56) bissextile_j = 14;
		if (age >= 60) bissextile_j = 15;
		if (age >= 64) bissextile_j = 16;
		if (age >= 68) bissextile_j = 17;
		if (age >= 72) bissextile_j = 18;
		if (age >= 76) bissextile_j = 19;
		if (age >= 80) bissextile_j = 20;
		if (age >= 84) bissextile_j = 21;
		if (age >= 88) bissextile_j = 22;
		if (age >= 92) bissextile_j = 23;
		if (age >= 96) bissextile_j = 24;
		if (age >= 100) bissextile_j = 25;
		if (age >= 104) bissextile_j = 26;
		if (age >= 108) bissextile_j = 27;
		if (age >= 112) bissextile_j = 28;
		if (age >= 116) bissextile_j = 29;
		if (age >= 120) bissextile_j = 30;


		if (age >= 4) bissextile_h = 24;
		if (age >= 8) bissextile_h = 48;
		if (age >= 12) bissextile_h = 72;
		if (age >= 16) bissextile_h = 96;
		if (age >= 20) bissextile_h = 120;
		if (age >= 24) bissextile_h = 144;
		if (age >= 28) bissextile_h = 168;
		if (age >= 32) bissextile_h = 192;
		if (age >= 36) bissextile_h = 216;
		if (age >= 40) bissextile_h = 240;
		if (age >= 44) bissextile_h = 264;
		if (age >= 48) bissextile_h = 288;
		if (age >= 52) bissextile_h = 312;
		if (age >= 56) bissextile_h = 336;
		if (age >= 60) bissextile_h = 360;
		if (age >= 64) bissextile_h = 384;
		if (age >= 68) bissextile_h = 408;
		if (age >= 72) bissextile_h = 432;
		if (age >= 76) bissextile_h = 456;
		if (age >= 80) bissextile_h = 480;
		if (age >= 84) bissextile_h = 504;
		if (age >= 88) bissextile_h = 528;
		if (age >= 92) bissextile_h = 552;
		if (age >= 96) bissextile_h = 576;
		if (age >= 100) bissextile_h = 600;
		if (age >= 104) bissextile_h = 624;
		if (age >= 108) bissextile_h = 648;
		if (age >= 112) bissextile_h = 672;
		if (age >= 116) bissextile_h = 696;
		if (age >= 120) bissextile_h = 720;


		if (age >= 4) bissextile_m = 1440;
		if (age >= 8) bissextile_m = 2880;
		if (age >= 12) bissextile_m = 4320;
		if (age >= 16) bissextile_m = 5760;
		if (age >= 20) bissextile_m = 7200;
		if (age >= 24) bissextile_m = 8640;
		if (age >= 28) bissextile_m = 10080;
		if (age >= 32) bissextile_m = 11520;
		if (age >= 36) bissextile_m = 12960;
		if (age >= 40) bissextile_m = 14400;
		if (age >= 44) bissextile_m = 15840;
		if (age >= 48) bissextile_m = 17280;
		if (age >= 52) bissextile_m = 18720;
		if (age >= 56) bissextile_m = 20160;
		if (age >= 60) bissextile_m = 21600;
		if (age >= 64) bissextile_m = 23040;
		if (age >= 68) bissextile_m = 24480;
		if (age >= 72) bissextile_m = 25920;
		if (age >= 76) bissextile_m = 27360;
		if (age >= 80) bissextile_m = 28800;
		if (age >= 84) bissextile_m = 30240;
		if (age >= 88) bissextile_m = 31680;
		if (age >= 92) bissextile_m = 33120;
		if (age >= 96) bissextile_m = 34560;
		if (age >= 100) bissextile_m = 36000;
		if (age >= 104) bissextile_m = 37440;
		if (age >= 108) bissextile_m = 38880;
		if (age >= 112) bissextile_m = 40320;
		if (age >= 116) bissextile_m = 41760;
		if (age >= 120) bissextile_m = 43200;


		if (age >= 4) bissextile_s = 86400;
		if (age >= 8) bissextile_s = 172800;
		if (age >= 12) bissextile_s = 259200;
		if (age >= 16) bissextile_s = 345600;
		if (age >= 20) bissextile_s = 432000;
		if (age >= 24) bissextile_s = 518400;
		if (age >= 28) bissextile_s = 604800;
		if (age >= 32) bissextile_s = 691200;
		if (age >= 36) bissextile_s = 777600;
		if (age >= 40) bissextile_s = 864000;
		if (age >= 44) bissextile_s = 950400;
		if (age >= 48) bissextile_s = 1036800;
		if (age >= 52) bissextile_s = 1123200;
		if (age >= 56) bissextile_s = 1209600;
		if (age >= 60) bissextile_s = 1296000;
		if (age >= 64) bissextile_s = 1382400;
		if (age >= 68) bissextile_s = 1468800;
		if (age >= 72) bissextile_s = 1555200;
		if (age >= 76) bissextile_s = 1641600;
		if (age >= 80) bissextile_s = 1728000;
		if (age >= 84) bissextile_s = 1814400;
		if (age >= 88) bissextile_s = 1900800;
		if (age >= 92) bissextile_s = 1987200;
		if (age >= 96) bissextile_s = 2073600;
		if (age >= 100) bissextile_s = 2160000;
		if (age >= 104) bissextile_s = 2246400;
		if (age >= 108) bissextile_s = 2332800;
		if (age >= 112) bissextile_s = 2419200;
		if (age >= 116) bissextile_s = 2505600;
		if (age >= 120) bissextile_s = 2592000;

		sup_j = -4;
		sup_h = -96;
		sup_m = -5760;
		sup_s = -345600;

		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;
			}

		}


		heure_sup = jour_sup_calcul * 24;
		minute_sup = jour_sup_calcul * 1440;
		seconde_sup = jour_sup_calcul * 86400;


		cout << "Nous en avons presque fini, donnez-moi votre heure de naissance(x : x : x) [/2 par defaut] : ";
		cin >> heure_naissance >> et >> minute_naissance >> et >> seconde_naissance;

		minute_naissance = heure_naissance * 60 + minute_naissance;
		seconde_naissance = heure_naissance * 3600;
		seconde_naissance = minute_naissance * 60 + seconde_naissance;


		cout << "Enfin, donnez-moi l'heure d'aujourd'hui(x : x : x) [/2 par defaut] : ";
		cin >> heure_local >> et >> minute_local >> et >> seconde_local;

		minute_local = heure_local * 60 + minute_local;
		seconde_local = heure_local * 3600;
		seconde_local = minute_local * 60 + seconde_local;


		calcul = age * jour + jour_sup_calcul + bissextile_j + sup_j;
		calcul_1 = age * jour * heure + heure_sup + heure_local - heure_naissance + bissextile_h + sup_h;
		calcul_2 = age * jour * heure * minute + minute_sup + minute_local - minute_naissance + bissextile_m + sup_m;
		calcul_3 = age * jour * heure * minute * seconde + seconde_sup + seconde_local - seconde_naissance + bissextile_s + sup_s;


		if (jour_sup_calcul <= 0)
		{
			jour_sup_calcul = jour_sup1 - jour_sup + 365;

			calcul = age * jour + jour_sup_calcul + bissextile_j + sup_j;
			calcul_1 = age * jour * heure + heure_sup + heure_local - heure_naissance + bissextile_h + sup_h;
			calcul_2 = age * jour * heure * minute + minute_sup + minute_local - minute_naissance + bissextile_m + sup_m;
			calcul_3 = age * jour * heure * minute * seconde + seconde_sup + seconde_local - seconde_naissance + bissextile_s + sup_s;

			if (jour_sup_calcul >= 365)
			{
				jour_sup_calcul = jour_sup1 - jour_sup;

				calcul = age * jour + jour_sup_calcul + bissextile_j + sup_j;
				calcul_1 = age * jour * heure + heure_sup + heure_local - heure_naissance + bissextile_h + sup_h;
				calcul_2 = age * jour * heure * minute + minute_sup + minute_local - minute_naissance + bissextile_m + sup_m;
				calcul_3 = age * jour * heure * minute * seconde + seconde_sup + seconde_local - seconde_naissance + bissextile_s + sup_s;
			}
		}
		cout << "Nous en avons fini, en effet vous avez vecu " << calcul << " jours" << endl;
		cout << "Nous en avons fini, en effet vous avez vecu " << calcul_1 << " heures" << endl;
		cout << "Nous en avons fini, en effet vous avez vecu " << calcul_2 << " minutes" << endl;
		cout << "Nous en avons fini, en effet vous avez vecu " << calcul_3 << " secondes" << endl;





	}




}