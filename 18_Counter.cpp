﻿// Программа Counter демонстрирует работу с циклами for

#include <iostream>

using namespace std;

int main()
{
	cout << "Counting forward:\n";
	for (int i = 0; i < 10; ++i)
	{
		cout << i << " ";
	}
	
	cout << "\n\nCounting backward:\n";
	for (int i = 10; i >= 0; --i)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting by fives:\n";
	for (int i = 0; i <= 50; i += 5)
	{
		cout << i << " ";
	}

	cout << "\n\nCounting with null statements:\n";
	int count = 0;
	for ( ; count < 10; )
	{
		cout << count << " ";
		++count;
	}

	cout << "\n\nCounting with nested for loops:\n";
	const int ROWS = 5;
	const int COLUMNS = 3;
	for (int i = 0; i < ROWS; ++i)
	{
		for (int j = 0; j < COLUMNS; ++j)
		{
			cout << i << "," << j << "  ";
		}
		cout << endl;
	}
	return 0;
}