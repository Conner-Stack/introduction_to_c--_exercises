#include <iostream>

using namespace std;



void swap(char& a, char& b)
{



	a = a + b;
	b = a - b;
	a = a - b;

	return;
}


void swap(int& a, int& b)
{



	a = a + b;
	b = a - b;
	a = a - b;

	return;
}




int main()
{
	int frst = 10;
	int scnd = 40;
	char first = 'A';
	char second = 'F';
	swap(first, second);
	swap(frst, scnd);

	system("pause");
	return 0;
}