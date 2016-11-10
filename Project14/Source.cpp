#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
	//creates an empty variable of linkedListType
	linkedListType<int> firstList;
	//initializes my list to an empty state
	firstList.initializeList();
	//inserts a node with a variable
	firstList.insertFirst(8);
	//points to the next spot in the list, sets a value
	firstList.insertLast(0);
	//same as above
	firstList.insertLast(0);
	//same as above
	firstList.insertLast(8);

	linkedListType<int> secList 

	system("pause");
	return 0;
}