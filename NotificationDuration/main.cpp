#include <Windows.h>
#include <stdio.h>
#pragma comment(lib, "user32.lib")

void main()
{
	ULONG MessageDuration_s = 7l;
	SystemParametersInfo(SPI_SETMESSAGEDURATION, 0, (void*) MessageDuration_s, 3);
}