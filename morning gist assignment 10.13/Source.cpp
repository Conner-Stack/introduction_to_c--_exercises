#include <iostream>





int Top2Sum(int arry[], int arrysize)
{
	int largest = 0;
	int largest2 = 0;
	int largestindex = 0;
	
	for (int i = 0; i < arrysize; i++)
	{
	
		if (largest < arry[i])
		{
			
			largest = arry[i];
		largestindex = i;
		}

	}

	for(int i = 0; i < arrysize; i++)
	{

		if (i == largestindex)
		{
			i++;
		}
		if (largest2 < arry[i])
		{
			largest2 = arry[i];
		}

	}
	return largest + largest2;
}




int main()
{
	int arry[5] = { 10, 13, 24, 1, 12 };


	int i = Top2Sum(arry, 5);


	system("pause");
	return 0;
}