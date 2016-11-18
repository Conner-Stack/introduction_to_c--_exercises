#include <iostream>
using namespace std;

int mult(int a, int b)
{
	int tmp = a;
	for (int i = 1; i < b; i++)
	{
		tmp += a;
	
	}
	
	return tmp;
}


int main()
{

	int answer = mult(5, 2);

	system("pause");
	return 0;
}