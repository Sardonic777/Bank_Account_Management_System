#include <iostream>
using namespace std;
void intro_window()
{

	char project_name[] = { 'B','A','N','K',' ','A','C','C','O','U','N','T',' ','M','A','N','A','G','E','M','E','N','T',' ','S','Y','S','T','E','M' };
	char author[] = { 'T', 'U', 'K', 'H', 'T', 'A', 'M','U','R','O','D','O','V',' ', 'S','A','R','D','O','R','B','E','K' };
	char text[] = { 'D','E','V','E','L','O','P','E','D',' ','B','Y' };
	cout << "\n\n\n\n\n\n\t\t\t";
	for (int i = 0; i < 30; i++)
	{
		cout << project_name[i];
		Sleep(150);
	}
	cout << endl << "                                ";
	for (int i = 0; i < 12; i++)
	{
		cout << text[i];
		Sleep(180);
	}
	cout << endl << "                           ";
	for (int i = 0; i < 23; i++)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout << author[i];
		Sleep(200);
	}
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, 7);
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
	char descriptionline1[] = { "°°  The Bank Account Management System is an application for maintaining a  °°" };
	char descriptionline2[] = { "°° person's account in a bank. In this project I tried to show the working  °°" };
	char descriptionline3[] = { "°°   of a banking account system and cover the basic functionality of a     °°" };
	char descriptionline4[] = { "°°°°°°°°°°°°°°°°°°°°°°° " };
	char descriptionline5[] = { "Bank Account Management System" };
	char descriptionline6[] = { " °°°°°°°°°°°°°°°°°°°°°°°" };

	for (int i = 0; i < 78; i++)
	{
		cout << descriptionline1[i];
		Sleep(80);
	}
	cout << endl;
	for (int i = 0; i < 78; i++)
	{
		cout << descriptionline2[i];
		Sleep(80);
	}
	cout << endl;
	for (int i = 0; i < 78; i++)
	{
		cout << descriptionline3[i];
		Sleep(80);
	}
	cout << endl;
	for (int i = 0; i < 24; i++)
	{
		cout << descriptionline4[i];
		Sleep(80);
	}
	for (int i = 0; i < 30; i++)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 4);
		cout << descriptionline5[i];
		Sleep(80);
	}
	for (int i = 0; i < 24; i++)
	{
		HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
		SetConsoleTextAttribute(h, 7);
		cout << descriptionline6[i];
		Sleep(80);
	}
	cout << endl;
	cout << "°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°° 2021 °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°" << endl;
	_getch();
	system("cls");
}
