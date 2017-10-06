// Fproj.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "world.h"



void TestWorld() {
	World uni;
	uni.Play();
}

int main()
{
	SetConsoleTitle(TEXT("DaS KuG's DamnednatioN"));
	TestWorld();
	cout << "\t\tGAME OVER" << endl;
	cin.get();
	cin.ignore();
    return 0;
}

