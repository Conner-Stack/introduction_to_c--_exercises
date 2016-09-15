#include <iostream>
using namespace std;

int main()
{
	//question 2
	//int *p;
	//int i;
	//int k;

	//i = 42;
	//k = i;
	//p = &i;
	//*p = 75;
	//cout << i << endl;

	//Answer is D


	//question 3 answer is 2 different variable types
	
	char blocks[3] = { 'A','B','C',};
	char *ptr = &blocks[0];
	char temp;

	temp = blocks[0];
	temp = *(blocks + 2);
	temp = *(ptr + 1);
	temp = *ptr;
	ptr = blocks + 1;
	temp = *ptr;
	temp = *(ptr + 1);
	ptr = blocks;
	//when actualy incrementing, temp stored the value and added on the next one
	temp = *++ptr;
	temp = ++*ptr;
	temp = *ptr++;
	//whether the pointer increments on the right hand side or not, it stays pointing at that spot
	temp = *ptr;
	cout << temp << endl;
	
	
	
	
	system("pause");
	return 0;

}