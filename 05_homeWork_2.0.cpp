// Майкл Доусон - "Изучаем С++ через программирование игр"
// Домашнее задание:
// Напишите программу, которая принимает у пользователя три суммы очков 
// за разные попытки в игре и выводит среднее значение на основе трёх.

#include <iostream>

using namespace std;

int main()
{
	cout << "Input 1.1 number: " << endl;
	int num_1_1 = 0;
	cin >> num_1_1;
	cout << "input 1.2 number: " << endl;
	int num_1_2 = 0;
	cin >> num_1_2;
	cout << "Input 1.3 number: " << endl;
	int num_1_3 = 0;
	cin >> num_1_3;

	cout << "Input 2.1 number: " << endl;
	int num_2_1 = 0;
	cin >> num_2_1;
	cout << "input 2.2 number: " << endl;
	int num_2_2 = 0;
	cin >> num_2_2;
	cout << "Input 2.3 number: " << endl;
	int num_2_3 = 0;
	cin >> num_2_3;

	cout << "Input 3.1 number: " << endl;
	int num_3_1 = 0;
	cin >> num_3_1;
	cout << "input 3.2 number: " << endl;
	int num_3_2 = 0;
	cin >> num_3_2;
	cout << "Input 3.3 number: " << endl;
	int num_3_3 = 0;
	cin >> num_3_3;

	int result_1 = 0;
	result_1 = (num_1_1 + num_1_2 + num_1_3) / 3;

	int result_2 = 0;
	result_2 = (num_2_1 + num_2_2 + num_2_3) / 3;

	int result_3 = 0;
	result_3 = (num_3_1 + num_3_2 + num_3_3) / 3;

	cout << "Result_1 = " << (num_1_1 + num_1_2 + num_1_3) / 3 << endl;
	cout << "Result_2 = " << (num_2_1 + num_2_2 + num_2_3) / 3 << endl;
	cout << "Result_3 = " << (num_3_1 + num_3_2 + num_3_3) / 3 << endl;

	cout << "Result = " << (result_1 + result_2 + result_3) / 3 << endl;

	return 0;
}
