#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;


int main()
{

	int logo[10][30] =
	{
	{1,1,1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,1,1,1,1,1,0,0,0,0,0,0,1,1,1,1,1,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,1,1,1,1,0,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,1,1,1,1,0,0,1,1,1,1,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,1,1,1,1,1,1,1,1,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0},
	{1,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,1,0,0,0,0,0,0}
	};


	Console::SetWindowSize(80, 40);
	Console::CursorVisible = false;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 30; j++)
		{
			if (logo[i][j] == 1)
			{
				Console::ForegroundColor = ConsoleColor::Magenta;
				cout << char(219);
			}
			if (logo[i][j] == 0)
			{
				Console::ForegroundColor = ConsoleColor::White;
				cout << char(219);
			}
		}
		cout << endl;
	}
	_getch();
	return 0;
}
