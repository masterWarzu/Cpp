// Перепишите программу Menu Chooser, представив различные уровни сложности в виде перечисления. При этом продолжайте работать с переменной типа int.

#include <iostream>

using namespace std;

int main()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Baby\n";
	cout << "2 - Easy\n";
	cout << "3 - Noob\n";
	cout << "4 - Normal\n";
	cout << "5 - Hard\n";
	cout << "6 - Nightmare!\n";

	int choice;
	cout << "\nChoice: ";
	cin >> choice;

	switch (choice)
	{
		case 1:
			cout << "You picked Baby.\n";
			break;
		case 2:
			cout << "You picked Easy.\n";
			break;
		case 3:
			cout << "You picked Noob.\n";
			break;
		case 4:
			cout << "You picked Normal.\n";
			break;
		case 5:
			cout << "You picked Hard.\n";
			break;
		case 6:
			cout << "You picked Nightmare!!! \n";
			break;
		default:
			cout << "You made an illegal choice.\n";
	}
	return 0;
}