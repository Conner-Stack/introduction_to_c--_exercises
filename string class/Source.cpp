#include <iostream>
#include "stringclass.h"
#include <cassert>
using namespace std;
//this makes the word available to be changed, somehow need to let the user input the argument themselves
Strings::Strings(char *w)
{
	word = w;

}

	//trying to figure out what return type and how to bring the word into the argument.
	int Strings::length()
	{
		return strlen(word);
	}
	//I'm sure the function in here is how to get the char in the certain index you are looking for, trying to figure out how to pass the word into it.
	char Strings::indexchar(int index)
	{
		char* pointer = 0;
			char letter;
		for (int i = 0; i < index; i++)
		{
			pointer = &word[i];
			
			

		}
	return *pointer;
		
	}



int main()
{
	Strings daString = Strings("Hello");
	int length = daString.length();
	cout <<"the length of your word is: " length << endl;
	char letterblock = daString.indexchar(3);
	cout << "you picked letter: " << letterblock << endl;
	
	system("pause");
		return 0;
}


//int main()
//{
//	char name1[20];
//	char name2[20];
//	char tmp[20];
//
//	cin >> name1 >> name2;
//
//
//	strcpy_s(tmp, name1);
//	strcpy_s(name1, name2);
//	strcpy_s(name2, tmp);
//	
//
//	cout << endl << name1 << endl << name2 << endl;
//
//	system("pause");
//	return 0;
//}