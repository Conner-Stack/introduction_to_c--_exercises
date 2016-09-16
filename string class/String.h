#pragma once
#include <iostream>
using namespace std;
class Strings
{
private: 
	char m_value[255];
	int m_length;
public:
	Strings::Strings();
	Strings(char[]);
	int length();
	char indexchar(int);
	char compare(char[]);
	Strings append(Strings);
	void printWord();
	Strings prepend(Strings);
	const char* constant();
	char lowercase();

};
