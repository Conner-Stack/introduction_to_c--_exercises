#pragma once
#include <iostream>
using namespace std;
class Strings
{
private: 
	char m_value[255];
	int m_length;
	int m_index;
public:
	Strings::Strings();
	Strings(char[]);
	int length();
	char indexchar(int);
	bool compare(Strings);
	Strings append(Strings);
	Strings prepend(Strings);
	const char* constant();
	void printWord();
	Strings lowercase();
	Strings uppercase();
	bool substring(Strings);
	bool substring2(Strings, int);
	Strings sub2sub(Strings, Strings);
	Strings inputstring();
};
void test();
