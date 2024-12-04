#include "clsRandomGen.h"
#include <iostream>
#include <windows.h>

int main()
{
	int lintcislo;
	DWORD ldwThreadID;
	HANDLE lhThread;
	clsRandomGen* lobjRandomGen;
	//vytvoření objektu
	lobjRandomGen = new clsRandomGen();
	
	//start generování čísel
	lhThread = CreateThread(NULL, 0, MyThreadStarter, lobjRandomGen, 0, &ldwThreadID);

	//generovat
	lintcislo = lobjRandomGen->GetRND();
	printf("%i", lintcislo);
	delete (lobjRandomGen);
}

