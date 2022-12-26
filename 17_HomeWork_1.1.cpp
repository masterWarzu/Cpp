// Новая версия прграммы Guess My Number, где игрок выбриает число, а компьютер должен его угадать.

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(static_cast <unsigned int> (time(0)));
	int secretNumber;
	int max;
	int tries = 0;
	int guess;
	cout << "\tWelcome to Guess My Number v.2.0\n\n";
	
	do
	{
		cout << "Input max number: ";
		cin >> max;
		cout << "Input your number 1 to " << max << ": ";
		cin >> secretNumber;
		if (secretNumber > max)
		{
			cout << "\nError! The hidden number must be less than max!\n\n";
		}
	} while (secretNumber > max);

	do
	{
		guess = rand() % max + 1;
		if (secretNumber > guess)
		{
			++tries;
			//cout << "\n" << tries << ") " << "To low! [ " << guess << " ]" << "\n\n";
		}
		else if (secretNumber < guess)
		{
			++tries;
			//cout << "\n" << tries << ") " << "To high! [ " << guess << " ]" << "\n\n";
		}
		else
		{
			++tries;
			//cout << "\n" << tries << ") " << "Bullseye!!! [ " << guess << " ]" << "\n\n";
			cout << "\nThat's it! You guessed the number " << guess << ". Computer got it in " << tries << " guesses!\n";
		}
	} while (secretNumber != guess);

	return 0;
}