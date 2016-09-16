#include <iostream>
#include "String.h"
#include <cassert>

using namespace std;

Strings::Strings()
{
}

//this lets me input a string and makes the string in private equal to it
Strings::Strings(char newString[])
{
	//assigns int i for the loop index
	int i;
	//loops through i as long as the index of newString is not the null terminator, then breaks out
	for (i = 0; newString[i] != '\0'; i++)
	{
		//the value of value in each iteration is equal to the value of newString up to the null terminating character
		m_value[i] = newString[i];
		
	}
m_length = i;
	//breaks out at the null terminator for newString, making the value of i indexed as the null term.
m_value[i] = '\0';
}




//returns the string length
int Strings::length()
{
	return m_length;

}



//I'm sure the function in here is how to get the char in the certain index you are looking for, trying to figure out how to pass the word into it.
char Strings::indexchar(int index)
{
	char character;
	character = (m_value[index] != '\0' && m_value[index] >= 0) ? m_value[index] : '?';
	return character;
}



//added an argument as input for another string for comparison
char Strings::compare(char extraString[])
{
	//setting variables for the result and the indexer
	int result = 0;
	int i = 0;

	//setting a loop to iterate through every character in the arrays until one of them hits the null character
	while (m_value[i] != '\0' || extraString[i] != '\0')
	{
		//setting up what i want my result to be dependant on true or false values
		result = ((int)m_value[i] == (int)extraString[i]) ? 0 : ((int)m_value[i] > (int)extraString[i]) ? 1 : -1;
		//if there is a descrepency between two letters, will break out with the value recieved, lexicographically ordered.
		if (result == -1 || result == 1)
			break;
		i++;
	}
	return result;
}
Strings Strings::append(Strings stringAppend)
{
	int newsize = this -> length() + stringAppend.length() ;
	char* afg = new char [newsize];
	for (int i = 0; i < this->length(); i++)
	{

		afg[i] = this->m_value[i];

	}
	
	for (int i = this -> length(); i < stringAppend.length() + this -> length(); i++)
	{
		int offset = i - this -> length();
		afg[i] = stringAppend.m_value[offset];

	}
	afg[newsize] = '\0';
	return Strings(afg);

}
Strings Strings::prepend(Strings stringPrepend)
{
	int newsize = stringPrepend.length() + this -> length();
	char* afg = new char[newsize];
	for (int i = 0; i < stringPrepend.length(); i++)
	{

		afg[i] = stringPrepend.m_value[i];

	}

	for (int i = stringPrepend.length(); i < this -> length() + stringPrepend.length(); i++)
	{
		int offset = i - stringPrepend.length();
		afg[i] = this -> m_value[offset];

	}
	afg[newsize] = '\0';
	return Strings(afg);

}
void Strings::printWord()
	{
			for (int i = 0; i < this -> m_length; i++)
			{
				printf("%c", this -> m_value[i]);
			}
			printf("\n\n");
	}

const char* Strings::constant()
{		
	return m_value;
}

char Strings::lowercase()
{
	char lowercase[255];
	int dickbutt;
	for (int i = 0; i < this->length(); i++)
	{
		if (this->m_value[i] >= 65 && this->m_value[i] <= 90)
		{
			dickbutt = (int)m_value[i];
			dickbutt = dickbutt + 32;
			lowercase[i] = (char)dickbutt;
		}
		else if (this->m_value[i] >= 97 && this->m_value[i] <= 122)
		{
			lowercase[i] = m_value[i];
		}
		


	}

lowercase[length()] = '\0';

return 
}


