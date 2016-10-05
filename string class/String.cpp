#include <iostream>
#include "String.h"
#include <cassert>

using namespace std;

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
		//states that if the current iteration in the array of the assigned m_value variable is the same as the iteration of extrastring m_value, do stuff
		if (this->m_value[i] == extraString.m_value[i])
		{
			//states that if the condition above is met, compare is set to true
			compare = true;
		}
		//states that if otherwise if the current iteration in the array of the assigned m_value does not equal the  iteration of extrastring m_value, to do this instead
		else if (this->m_value[i] != extraString.m_value[i])
		{
			//compare will be set to false if the above condition is met
			compare = false;
			//break out of the loop
			break;
		}
		//adds 1 to i each loop until broken out of
		i++;
	}
	//returns true or false
	return compare;
}
//appends the argument to the assigned string that calls the function
Strings Strings::append(Strings stringAppend)
{
	//the beginning of making a new array size that can fit both strings and a null terminator
	int newsize = this -> length() + stringAppend.length() ;
	//adds some space in memory for the new variable
	char* afg = new char [newsize];
	//loops through the length of the string that calls the function
	for (int i = 0; i < this->length(); i++)
	{
		//assigns the new variable the characters from m_value
		afg[i] = this->m_value[i];

	}
	//loops to add the other string starting directly after the last iteration used to add m_value, adds both strings together in the condition so it will iterate far enough to add the second string before breaking
	for (int i = this -> length(); i < stringAppend.length() + this -> length(); i++)
	{
		//the offset is used to start stringappend variable at it's first array to add it to the end of afg
		int offset = i - this -> length();
		//iterates through afg starting where this->length() left off, adding all the letters from stringAppend
		afg[i] = stringAppend.m_value[offset];

	}
	//adds the null terminator to the end of the array
	afg[newsize] = '\0';
	//returns the new character string
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
	char* stringptr = new char [length()];
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
bool Strings::findsubstring(Strings substring)
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
					m_index = i;
			
				}
				//states that if the prior statement is not true that bool found equals false
				else
				{
					
					found = false;
					m_index = 0;
				}
			}
		}
	}
	//return found
	return found;
}
//same thing as above just with an integer that determines where to start looking for the substring
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
//function for replacing a substring in a string with another
Strings Strings::sub2sub(Strings substring, Strings replacement)
{
	int newindex = 0;
	findsubstring(substring);

	int newsize = this->length() - substring.length() + replacement.length();
	
	char* newarray = new char[newsize];
	
	for (int i = 0; i < m_index; i++)
	{

		newarray[i] = m_value[i];
	}
	for (int i = m_index , j = 0; i < substring.length() + replacement.length(); i++, j++)
	{
		newarray[i] = replacement.m_value[j];

	}
	for (int i = m_index + replacement.length(), j = m_index + substring.length(); i < newsize; i++, j++)
	{
		newarray[i] = m_value[j];
}


		newarray[newsize] = '\0';
		return Strings(newarray);
}




void test()
{
	//sets m_value to Hello if assigned to a function
	Strings daString = Strings("Hello");
	//sets m_value to goodbye if assigned to a function
	Strings daString2 = Strings("goodbye");
	//sets the substring i want to find to include the characters e and l
	Strings SubStringfind = Strings("el");
	//calling the length function using daString
	Strings SubStringRep = Strings("balls");
	int length = daString.length();
	//printing the result to the console
	cout << "the length of your word is: " << length << endl;
	//call the indexchar function to find what character you want in daString
	char letterblock = daString.indexchar(4);
	//prints said character to console
	cout << "you picked letter: " << letterblock << endl;
	//calls the compare function, comparing daString and daString2
	bool result = daString.compare(daString2);
	//prints result to console, 1 for true, 0 for false
	cout << "is the length true or false? " << result << endl;
	//calls the append function adding daString2 to the end of daString
	Strings appendedString = daString.append(daString2);
	//prints all the characters from the above function
	appendedString.printWord();
	//calls the prepend function to add daString2 to the front of daString
	Strings PrependedString = daString.prepend(daString2);
	//prints all the characters in order from the above function
	PrependedString.printWord();
	//calls the constant function to change m_value to a constant character
	const char* constant = daString.constant();
	//prints m_value as a constant character
	cout << constant << endl;
	//calls the lowercase function turning any capital letters in daString to lowercase
	Strings lowercase = daString.lowercase();
	//prints the array to the console as all lowercase letters
	lowercase.printWord();
	//calls the uppercase function turning any lowercase letters in daString to uppercase
	Strings uppercase = daString.uppercase();
	//prints the array to the console as all uppercase letters
	uppercase.printWord();
	//calls the substring function to use the value of SubStringfind as a reference to potentially find the substring in daString if there is one
	bool found = daString.findsubstring(SubStringfind);
	//if found is true, print "found it!" to console, if false, print nosir
	(found == true) ? cout << "found it!" << endl : cout << "nosir" << endl;
	//calls the substring2 function, which does the same thing as the substring function, however starts at the address you specify using the second argument variable
	bool found2 = daString.substring2(SubStringfind, 3);
	//basically the same thing as the prior result
	(found == true) ? cout << "found" << endl : cout << "nope" << endl;
	//defines and calls the sub2sub function to replace a substring with another
	Strings subreplace = daString.sub2sub(SubStringfind, SubStringRep);
	//prints out the new array
	subreplace.printWord();



}







