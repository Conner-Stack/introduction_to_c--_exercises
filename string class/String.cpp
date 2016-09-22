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
Strings Strings::compare(Strings extraString)
{
	//setting variables for the result and the indexer
	char yes[4] = "yes";
	char no[3] = "no";
	bool compare = true;
	int i = 0;

	//setting a loop to iterate through every character in the arrays until one of them hits the null character
	while (this->m_value[i] != '\0' || extraString.m_value[i] != '\0')
	{
		if (this->m_value[i] == extraString.m_value[i])
		{
			compare = true;
		}
		else if (this->m_value[i] != extraString.m_value[i])
		{
			compare = false;
			return Strings(no);
		}
		i++;
	}
	return Strings(yes);
}
//not sure why I'm using Strings as a function type and an argument nor how i can
Strings Strings::append(Strings stringAppend)
{
	//made an integer to up the array to accomodate the new appended string
	int newsize = this -> length() + stringAppend.length() ;
	//not exactly sure what this does
	char* afg = new char [newsize];
	//jeremy helped me from here on out but i couldn't really grasp what any of this does
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

//figured this would be the same thing as above, but backwards
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
//this is so i can print out all the characters in a string
void Strings::printWord()
	{
			for (int i = 0; i < this -> m_length; i++)
			{
				printf("%c", this -> m_value[i]);
			}
			printf("\n");
	}



//simply changes m_value to a constant char
const char* Strings::constant()
{		
	return m_value;
}

Strings Strings::lowercase()
{
	int asciivalue;
	char* stringptr = &m_value[0];
	for (int i = 0; i < this->length(); i++)
	{
		if (this->m_value[i] >= 65 && this->m_value[i] <= 90)
		{
			asciivalue = (int)m_value[i];
			asciivalue += 32;
			stringptr[i] = (char)asciivalue;
		}
		else if (this->m_value[i] >= 97 && this->m_value[i] <= 122)
		{
			stringptr[i] = m_value[i];
		}
	}

	stringptr[length()] = '\0';
		return Strings(stringptr);
}

Strings Strings::uppercase()
{
	int asciivalue;
	char*stringptr = &m_value[0];

	for (int i = 0; i < this->length(); i++)
	{
		if (this->m_value[i] >= 97 && this->m_value[i] <= 122)
		{
			asciivalue = (int)m_value[i];
			asciivalue -= 32;
			stringptr[i] = (char)asciivalue;
	}
		else if (this->m_value[i] >= 65 && this->m_value[i] <= 90)
		{
			stringptr[i] = m_value[i];
		}
	}
	stringptr[length()] = '\0';
	return Strings(stringptr);
}












