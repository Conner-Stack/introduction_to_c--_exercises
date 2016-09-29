#include <iostream>
#include "String.h"
#include <cassert>

using namespace std;
//this is my default constructor
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
	//makes the m_length equal to what is stored in i after the loop finishes
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
bool Strings::compare(Strings extraString)
{
	//setting variables for the result and the indexer
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
			break;
		}
		i++;
	}
	return compare;
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
		//using a for loop to iterate through all the characters and print them out one by one
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
	//assigned and int to represent the change in asciivalue from uppercase to lowercase
	int asciivalue;
	//made a character pointer that points to the address of m_value starting at the first array slot
	char* stringptr = &m_value[0];
	//using a for loop to iterate through the length of the word to access each individual array
	for (int i = 0; i < this->length(); i++)
	{
		//if statement to state what to do with uppercase letter if it is present in an address slot
		if (this->m_value[i] >= 65 && this->m_value[i] <= 90)
		{
			//assigning the ascii integer value of the character array spot of m_value to the asciivalue integer
			asciivalue = (int)m_value[i];
			//adding 32 to ascii value to get the equivelent lowercase letter
			asciivalue += 32;
			//assigns the address the pointer is at to the character equivelent of what asciivalue currently is
			stringptr[i] = (char)asciivalue;
		}
		//else if stating what to do if the letter is already lowercase
		else if (this->m_value[i] >= 97 && this->m_value[i] <= 122)
		{
			//does nothing to change m_value, assigning the address the pointer is on to the value currently in m_value
			stringptr[i] = m_value[i];
		}
	}
	//assigns the very last address in the character array the null pointer
	stringptr[length()] = '\0';
	//dereferences the stringptr and returns the string
		return Strings(stringptr);
}
//same thing but backwards
Strings Strings::uppercase()
{
	int asciivalue;
	char*stringptr = new char[length()];

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
//using a boolean function to see if the string contains the given substring
bool Strings::substring(Strings substring)
{
	//initializes our boolean found to false
	bool found = false;
	//making a for loop to iterate through the characters in the array
	for (int i = 0; i < this->length(); i++)
	{
		//restating if the substring is found it returns true
		if (found == true)
		{
			return true;
		}
		//if the string is true, do stuff
		if (this->m_value[i] == m_value[i])
		{
			//performing a loop starting at 0 incrementing by once as long as it's less than the substring length
			for (int j = 0; j < substring.length(); j++)
			{
				//if the character in the given iteration of the string is the same as the character iteration in thesubstring, do stuff
				if (this->m_value[ i + j ] == substring.m_value[j])
				{
					//boolean found will equal true if the iterations of the substring are the same as the iterations in the string
					found = true;
			
			
				}
				//states that if the prior statement is not true that bool found equals false
				else
				{
					
					found = false;
				}
			}
		}
	}
	//return found
	return found;
}
//
bool Strings::substring2(Strings substring, int e)
{
	bool found = false;
	for (int i = e; i < this->length(); i++)
	{
		if (found == true)
		{
			return true;
		}
		if (this->m_value[i] == m_value[i])
		{
			for (int j = 0; j < substring.length(); j++)
			{
				if (this->m_value[i + j] == substring.m_value[j])
				{
					found = true;
				}
				else
				{
					found = false;
				}
			}
		}
	}
	return found;
}

//Strings Strings::sub2sub(Strings substrig, Strings replacement)
//{
//	
//	substring(substrig);
//
//	int wordsize = this->length() - substrig.length() + replacement.length();
//	char* ptr = new char[wordsize];
//	
//	for (int i = 0; i < m_index; i++)
//	{
//		ptr[i] = this->m_value[i];
//
//	}
//	for (int i = m_index, j = 0; i < replacement.length() + m_index; i++, j++)
//	{
//
//
//	}
//
//
//
//	return ;
//}

void test()
{
	Strings daStringwut = Strings("Hello");
	Strings daString = Strings("Hello");
	Strings daString2 = Strings("goodbye");
	Strings SubStringfind = Strings("el");
	int length = daString.length();
	cout << "the length of your word is: " << length << endl;
	char letterblock = daString.indexchar(4);
	cout << "you picked letter: " << letterblock << endl;
	bool result = daString.compare(daString2);
	cout << "is the length true or false? " << result << endl;
	Strings appendedString = daString.append(daString2);
	appendedString.printWord();
	Strings PrependedString = daString.prepend(daString2);
	PrependedString.printWord();
	const char* constant = daString.constant();
	cout << constant << endl;
	Strings lowercase = daString.lowercase();
	lowercase.printWord();
	Strings uppercase = daString.uppercase();
	uppercase.printWord();
	bool found = daString.substring(SubStringfind);
	(found == true) ? cout << "found it!" << endl : cout << "nosir" << endl;
	bool found2 = daString.substring2(SubStringfind, 3);
	(found == true) ? cout << "found" << endl : cout << "nope" << endl;


}







