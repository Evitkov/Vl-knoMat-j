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
	

	 //thread bue b�et
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
// // thread generov�n� ��sel
//
void clsRandomGen::ThreadGen()
{
	do {
		//generovat ��slo
		mintActNumber = rand();

		printf("f");
	} while (mblThreadStop == false);
}
//
// // vrac� aktu�ln� ��slo
//
int clsRandomGen::GetRND()     
{
	return mintActNumber;
}