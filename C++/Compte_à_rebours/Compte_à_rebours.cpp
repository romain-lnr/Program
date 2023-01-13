using namespace std;
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
	int time;
	int t;

	cout << "Combien voulez-vous mettre comme compte a rebours ? :";
	cin >> time;

	for (t = time-1; t >= 0; t--)
	{
		cout << t << endl;
		sleep(1);

	}
	cout << "il est l'heure!!!";
}