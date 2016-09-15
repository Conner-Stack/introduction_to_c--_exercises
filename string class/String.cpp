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


//char Strings::append(char someString[])
//{
//
//
//
//
//
//}




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