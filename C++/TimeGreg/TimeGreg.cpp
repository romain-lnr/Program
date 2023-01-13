using namespace std;
#include <ctime>
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
    long long int t, byear,bmonth, bbday, bhour, bmin, bsec;
    struct tm ltm, bday;
    time_t bday_t, now, diff;

    cout << "Quel est votre annee de naissance : ";
    cin >> byear;
    cout << "Quel est votre mois de naissance : ";
    cin >> bmonth;
    cout << "Quel est votre jour de naissance : ";
    cin >> bbday;
    cout << "A quelle heure : ";
    cin >> bhour;
    cout << "A quelle minute : ";
    cin >> bmin;
    cout << "A quelle seconde : ";
    cin >> bsec;

    bday_t = time(0);
    localtime_s(&bday, &bday_t);
    bday.tm_year = byear - 1900;
    bday.tm_mon = bmonth - 1;
    bday.tm_mday = bbday;
    bday.tm_hour = bhour;
    bday.tm_min = bmin;
    bday.tm_sec = bsec;
    bday_t = mktime(&bday);

    now = time(0);
    localtime_s(&ltm, &now);

    diff = now - bday_t;

   cout << "Vous avez vecu " << diff << " secondes" << endl;





    //    cout << (ltm.tm_year) << ":";
    //    cout << (ltm.tm_yday) << ":";
    //    cout << (ltm.tm_mon+1) << ":";
    //    cout << (ltm.tm_mday) << ":";
    //    cout << (ltm.tm_wday) << ":";
    //    cout << (ltm.tm_hour) << ":";
    //    cout << (ltm.tm_min) << ":";
    //    cout << (ltm.tm_sec) << endl;
    //    sleep(1);
   

}
