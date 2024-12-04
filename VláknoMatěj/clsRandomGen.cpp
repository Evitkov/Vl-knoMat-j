#include "clsRandomGen.h"
#include <time.h>
#include <iostream>

//
// // Start Threadu
//
DWORD WINAPI MyThreadStarter(LPVOID lpParam)
{
	clsRandomGen* lobjGen;
	lobjGen = (clsRandomGen*)lpParam;
	lobjGen->ThreadGen();
	return 0;
}
//
// // konstruktor
//
clsRandomGen::clsRandomGen() 
{
	//seed generator
	srand(time(NULL));
	

	 //thread bue bìžet
	 mblThreadStop = false;

}
//
// // destruktor
//
clsRandomGen::~clsRandomGen() 
{
	mblThreadStop = true;
}
//
// // thread generování èísel
//
void clsRandomGen::ThreadGen()
{
	do {
		//generovat èíslo
		mintActNumber = rand();

		printf("f");
	} while (mblThreadStop == false);
}
//
// // vrací aktuální èíslo
//
int clsRandomGen::GetRND()     
{
	return mintActNumber;
}