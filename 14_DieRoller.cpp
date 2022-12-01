// Программа Die Roller демонстрирует генериррование случайных чисел

#include <iostream>
#include <cstdlib>	// в этой бибилиотеке находится функция rand()
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast <unsigned int> (time(0)));	// функция srand() сеет генератор случайных чисел; unsigned int - зерно, которое передаётся функции srand()
													// функция time() возвращает число в зависимости от текущих значений даты и времени
	// запускаем генератор случайных чисел
	int randomNumber = rand();	// генерируем случайное число
	int die = (randomNumber % 6) + 1;	// получаем число между 1 и 6
	cout << "You rolled a " << die << endl;
	return 0;
}