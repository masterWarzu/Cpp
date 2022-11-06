//Майкл Доусон - "Изучаем С++ через программирование игр"
// Программа GameStats 2.0 демонстрирует арифметические операции с переменными.

#include <iostream>

using namespace std;

int main()
{
	unsigned int score = 5000;
	cout << "score: " << score << endl;
	score = score + 1000;	// изменение значения переменной
	cout << "score: " << score << endl;
	score += 100;	//комбинированный оператор присваивания
	cout << "score: " << score << endl;
	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;
	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;
	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bonus = " << lives << ", " << bonus << endl;
	score = 4294967295;	// целочисленное переполнение
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;
	return 0;
}