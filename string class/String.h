#pragma once
#include <iostream>
using namespace std;
class Strings
{
private: 
	//my strings variable
	char m_value[255];
	//used to get the length of chars in the string
	int m_length;
	//used to replace the substring
	int m_index;
public:
	//class constructor
	Strings() {};
	//gives a value to m_value
	Strings(char[]);
	//finds the length of m_value
	int length();
	//finds the character in whatever index I want of m_value's array
	char indexchar(int);
	//comparing a second value to m_value to see if they are the same
	bool compare(Strings);
	//adding a string to the end of the m_value string
	Strings append(Strings);
	//adding a string before m_value string
	Strings prepend(Strings);
	//changing m_value to a constant char
	const char* constant();
	//prints m_value character by character in a loop
	void printWord();
	//changes all uppercase letters in m_value to lowercase
	Strings lowercase();
	//the reverse of lowercase
	Strings uppercase();
	//finds a substring within m_value if it has one
	bool findsubstring(Strings);
	//finds a substring within m_value starting at a specific iteration in the loop
	bool substring2(Strings, int);
	//switches a substring out with a new one
	Strings sub2sub(Strings, Strings);
};
//groups all the calls for the functions
void test();
