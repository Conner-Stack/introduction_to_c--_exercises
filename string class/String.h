#pragma once

class Strings
{
private: 
	char m_value[255];

public:
	Strings(char[]);
	int length();
	char indexchar(int index);
	char compare(char extraword[]);
	char append(char someString[]);
	char prepend();
private:
	int m_length;

};
