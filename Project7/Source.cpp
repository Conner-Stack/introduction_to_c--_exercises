#include <iostream>

using namespace std;

int mosttimes(int* numbers, int arraysize)
{
	int current = 0;
	int currentcount = 0;
	int mostcommon = 0;
	int mostcommoncount = 0;
	for(int i = 0; i < arraysize; i++)
	{
		
		current = numbers[i];


		

		for (int j = 0; j < arraysize; j++)
		{
			if (numbers[j] == current)
			{
				currentcount++;
				if (currentcount > mostcommoncount)
				{
					mostcommoncount = currentcount;
					mostcommon = numbers[i];
			}
				
			}
	}
currentcount = 0;
	}
	return mostcommon;
}




int main()
{

	int arrayz[10] = { 4, 1, 1, 2, 1, 3, 3, 3, 4, 3 };

	int t = mosttimes(arrayz, 10);


	system("pause");
	return 0;
}