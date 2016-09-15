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
		value[i] = newString[i];
	}
	//breaks out at the null terminator for newString, making the value of i indexed as the null term.
	value[i] = '\0';
}

//returns the string length
int Strings::length()
{
	//sets the index to 0
	int i = 0;
	//looping through the character array until it hits the null terminator
	while (value[i] != '\0')
	{
		//increments through the array until it hits the null terminator then breaks out the loop
		i++;
		
}
	//returns the value of i
	return i;

}
//I'm sure the function in here is how to get the char in the certain index you are looking for, trying to figure out how to pass the word into it.
char Strings::indexchar(int index)
{
	char character;	
	character = (value[index] != '\0' && value[index] >=0) ? value[index] : '?';
	return character;
}
//added an argument as input for another string for comparison
char Strings::compare(char extraString[])
{
	//setting variables for the result and the indexer
	int result = 0;
	int i = 0;

	//setting a loop to iterate through every character in the arrays
	while (value[i] != '\0' && extraString[i] != '\0')
	{
		//states that if the character in value is the same as the character in the extra string, i will iterate +1 and the result will equal 0- or the same;
		if (value[i] == extraString[i])
		{
			result = 0;
			i++;
			break;
		}
		//states that if a letter's integer value in value is greater than that of the one in extraString, that result is set to 1;  
		else if (value[i] > extraString[i])
		{
			result = 1;
			break;
		}
		else if (value[i] < extraString[i])
		{
			result = -1;
			break;
		}
		
	}
	return result;
}
char Strings::append(char someString[])
{
	int i = 0;
	while (someString[i] != '\0')
	{
		value[i] = someString[i];
		someString++;
		value[i]++;
	}
	value[i] = 0;

	return someString[255];
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