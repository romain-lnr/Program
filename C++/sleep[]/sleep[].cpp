
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
