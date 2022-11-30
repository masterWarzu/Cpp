// Программа Designers Network демонстрирует работу с логическими операторами

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string username;
	string password;
	bool success;
	cout << "\tGame Designer's Network\n";
	do
	{
		cout << "\nUsername: ";
		cin >> username;
		cout << "Password: ";
		cin >> password;
		if (username == "S.Meier" && password == "civilization")
		{
			cout << "\nAccess granted.";
			cout << "\nHey, Sid." << endl;
			success = true;
		}
		else if (username == "S.Miyamoto" && password == "mariobros")
		{
			cout << "\nAccess granted.";
			cout << "\nWhat's up, Shigeru?" << endl;
			success = true;
		}
		else if (username == "W.Wright" && password == "thesims")
		{
			cout << "\nAccess granted.";
			cout << "\nHow goes it, Will?" << endl;
			success = true;
		}
		else if (username == "guest" || password == "guest")
		{
			cout << "\nAccess granted.";
			cout << "\nWelcome, guest." << endl;
			success = true;
		}
		else
		{
			cout << "\nAccess denied.";
			cout << "\nYour login failed." << endl;
			success = false;
		}
	} while (!success);
	return 0;
}