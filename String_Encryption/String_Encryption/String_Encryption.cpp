#include <string>
#include <iostream>
#include "EncryptableString.h"
using namespace std;


int main()
{
	string password;     //to hold the string entered by the user

	cout << "Enter the string to be encrypted.\nNote that the string can only contain chars a-z and A-Z.:";
	getline(cin, password);

	system("cls");
	EcryptableString pass(password);
	cout << "This is the string before encryption: ";
	cout << pass << endl;

	cout << "This is the string after encryption: ";
	pass.encrypt();
	cout << pass << endl;
	cout << endl;
	system("pause");
    return 0;
}

