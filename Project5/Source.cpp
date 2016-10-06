#include <iostream>
using namespace std;

void evennumber(int *ptr, int arraylength)
{
	int storage = 0;
	for (int i = 0; i < arraylength; i ++)
	{		
		 ptr[i] = storage+=2;
	}
}



int main()
{
	int thisStuff[5];
	evennumber(thisStuff, 5);
	system("pause");
	return 0;
}