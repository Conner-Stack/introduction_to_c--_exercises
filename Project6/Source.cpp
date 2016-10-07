#include <iostream>
using namespace std;

char* reverse(char *arrayz)/* char arraylength)*/
{

	int count = 0;
	
	while(arrayz[count] != '\0')
	{
		count++;
	}


	char* bassackwards = new char [count];

	for (int i = 0, j = count; i < count; i++,j-- )
	{

		bassackwards[i] = arrayz[j];
	}

	bassackwards[count] = '\0';
	return bassackwards;
















	//char* tmp = new char [arraylength];
	//

	//for (int i = 0, j = arraylength - 2; i < arraylength - 1; i++, j--)
	//{
	//	tmp[i] = arrayz[j];
	//
	//	
	//}

	//tmp[arraylength-1] = '\0';
	//
	//return tmp;

}



int main()
{
	char gurgler[6] = "hello";
	char* gurgle = gurgler;
	gurgle = reverse(gurgle);

	system("pause");
	return 0;
}