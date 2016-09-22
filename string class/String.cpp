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
//this is just a reference for how printf works that jeremy gave me
//void Strings::printWord()
//	{
//			for (int i = 0; i < this -> m_length; i++)
//			{
//				printf("%c", this -> m_value[i]);
//			}
//			printf("\n\n");
//	}



//simply changes m_value to a constant char
const char* Strings::constant()
{		
	return m_value;
}

char Strings::lowercase()
{
	/*the only thing i can't get to work is for this to return all the characters it needs to. I can only return statically
	which won't work if the string changes to a larger or smaller array*/
	char result[255];
	//the value to change the character from uppercase to lowercase
	int asciivalue;
	//not sure if i need the pointer yet, however I'm still trying to find ways to get this right so it's still here.
	char* stringptr;
	//made a for loop so i could iterate through the array
	for (int i = 0; i < this->length(); i++)
	{
		//if statement stating if it's an uppercase letter, i should do something with it
		if (this->m_value[i] >= 65 && this->m_value[i] <= 90)
		{
			//states that the asciivalue integer is set to be equal to the int value of m_value each iteration
			asciivalue = (int)m_value[i];
			//adding 32 to change the integer value as it appears on the ascii chart
			asciivalue += 32;
			//the spot in the array is now set to the lowercase char
			result[i] = (char)asciivalue;
		}
		//this is if otherwise the char is lowercase to begin with do something else
		else if (this->m_value[i] >= 97 && this->m_value[i] <= 122)
		{
			//the character of lowercase is equal to the character of m_value
			result[i] = m_value[i];
		}

	//and after this I'm not sure how to return the populated array, trying things like pointers but it always comes out the same
		stringptr = &result[i];
	
	}
	//sets the spot after the last character to null by default
	result[length()] = '\0';

	//return will break out of the function even if it's in a loop, so I don't know how to populate it
	return *stringptr;
}

char uppercase()
{






}



char substring()
{
	char substring[255];







}













