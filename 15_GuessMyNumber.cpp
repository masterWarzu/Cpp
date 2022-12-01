// Игра Guess My Number классическая игра в угадывание чисел

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast <unsigned int> (time(0)));	// запусаем генератор случайных чисел
	int secretNumber = rand() % 100 + 1;	// случайное число в диапазоне от 1 до 100
	int tries = 0;
	int guess;
	cout << "\tWelcome to Guess My Number\n\n";

	do
	{
		cout << "Enter a guess: ";
		cin >> guess;
		++tries;
		if (guess > secretNumber)
		{
			cout << "Too high!\n\n";
		}
		else if (guess < secretNumber)
		{
			cout << "Too low!\n\n";
		}
		else
		{
			cout << "\nThat's it! You got it in " << tries << " guesses!\n";
		}
	} while (guess != secretNumber);
}
