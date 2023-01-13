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



    int t;
    struct tm ltm;

    for (t = 0; t <= 3600; t++)
    {
        time_t now = time(0);
        localtime_s(&ltm, &now);

       //cout << (ltm.tm_year + 1900) << ":";
       //cout << (ltm.tm_yday) << ":";
       //cout << (ltm.tm_mon) << ":";
       //cout << (ltm.tm_mday) << ":";
       //cout << (ltm.tm_wday) << ":";
        cout << (ltm.tm_hour) << ":";
        cout << (ltm.tm_min) << ":";
        cout << (ltm.tm_sec) << endl;
        sleep(1);
    }

}
