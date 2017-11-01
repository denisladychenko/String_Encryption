#include <iostream>
#include "EncryptableString.h"
using namespace std;


void EcryptableString::encrypt()
{
	int len = this->length();

	for (int i = 0; i < len; i++)
	{
		//skip white spaces
		if ((*this)[i] != ' ') {
			//if char at index is z then start over with a
			if ((*this)[i] == 'z')
				(*this)[i] = 'a';
			//if char at index is Z then start over with capital A
			else if ((*this)[i] == 'Z')
				(*this)[i] = 'A';
			else
				(*this)[i]++;   //switch to the next char in the ASCII
		}
	}
}