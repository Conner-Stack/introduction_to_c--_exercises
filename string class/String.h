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
	Strings compare(Strings);
	Strings append(Strings);
	Strings prepend(Strings);
	const char* constant();
	void printWord();
	Strings lowercase();
	Strings uppercase();
	Strings substring();
	Strings substring2();
	Strings sub2sub();
	Strings inputstring();
};
