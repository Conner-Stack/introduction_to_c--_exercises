#pragma once

class Strings
{
private: 
	char value[255];

public:
	Strings(char*);
	int length();
	char indexchar(int index);
	char compare(char extraword[]);
	char append(char someString[]);
	char prepend();

};
