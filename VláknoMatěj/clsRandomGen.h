#pragma once

#include <windows.h>
DWORD WINAPI MyThreadStarter(LPVOID lpParam);
class clsRandomGen
{
private:
	bool mblThreadStop;
	int mintActNumber;

public:
	clsRandomGen();
	~clsRandomGen();
	void ThreadGen();     // thread generov�n� ��sel
	int GetRND();      // vrac� aktu�ln� ��slo
};

