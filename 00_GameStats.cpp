﻿// Майкл Доусон - "Изучаем С++ через программирование игр"
// Программа GameStats демонстрирует объявление и инициализацию переменных.

#include <iostream>

using namespace std;

int main()
{
	int score = 0;
	double distance = 1200.76;
	char playAgain = 'y';
	bool shieldsUp = true;
	short lives = 3, aliensKilled = 10;
	double engineTemp = 6572.89;
	cout << "\nscore: " << score << endl;
	cout << "distance: " << distance << endl;
	cout << "plsyAgain: " << playAgain << endl;
	// пропускаем shieldsUp поскольку булевы значения как правило не выводятся на экран
	cout << "lives: " << lives << endl;
	cout << "aliensKilled: " << aliensKilled << endl;
	cout << "engineTemp: " << engineTemp << endl;
	int fuel;
	cout << "\nHow mutch fuel? ";
	cin >> fuel;
	cout << "fuel: " << fuel << endl;
	typedef unsigned short int ushort;
	ushort bonus = 10;
	cout << "\nbonus: " << bonus << endl;
	return 0;
}
