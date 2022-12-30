// Программа String Tester демонстрирует работу со строковыми объектами

#include <iostream>
#include <string>

using namespace std;

int main()
{
	// создаются три строки, тремя разными способами:
	string word1 = "Game";
	string word2("Over");
	string word3(3, '!');	// строковый объект состоящий из нескольких экземляров указанного в скобках символа, количество экземпляров равно указанному числу:
	string phrase = word1 + " " + word2 + word3;

	cout << "The phrase is: " << phrase << "\n\n";
	cout << "The phrase has " << phrase.size() << " characters in it.\n\n";
	cout << "The character at position 0 is: " << phrase[0] << "\n\n";
	cout << "Changing the character at position 0.\n";

	phrase[0] = 'L';
	cout << "The phrase is now: " << phrase << "\n\n";

	for (unsigned int i = 0; i < phrase.size(); ++i)
	{
		cout << "Character at position " << i << " is: " << phrase[i] << endl;
	}

	cout << "\nThe sequense 'Over begins at location ";
	cout << phrase.find("Over") << endl;

	if (phrase.find("eggplant") == string::npos)
	{
		cout << "'eggplant' is not in the phrase.\n\n";
	}

	phrase.erase(4, 5);	// удаляет 5 символов из строки, начиная с 4-го:
	cout << "The phrase is now: " << phrase << endl;
	phrase.erase(4);	// удаляет все символы из строки, начиная с 4-го:
	cout << "The phrase is now: " << phrase << endl;
	phrase.erase();	// удаляет все символы из строки:

	cout << "The phrase is now: " << phrase << endl;

	if (phrase.empty())	// возвращает true, если объект string пустой:
	{
		cout << "\nThe phrase is no more.\n";
	}
	return 0;
}