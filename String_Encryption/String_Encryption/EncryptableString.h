#ifndef ENCRYPTABLESTRING_H
#define ENCRYPTABLESTRING_H

#include <iostream>
#include <string>
using namespace std;

//this class inherites from STL string class
class EcryptableString: public string
{
public:
	EcryptableString(string s): string(s) {}
	void encrypt();   //added method

private:

};



#endif 

