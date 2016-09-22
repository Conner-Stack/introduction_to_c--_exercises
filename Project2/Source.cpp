#include <iostream>

#include <iostream>
void lowerCase();
int main()
{
	lowerCase();
	system("pause");
	return 1;
}
void lowerCase()
{
	//Function mysteriously doesn't work?
	char Array[] = "GIMmIE";
	for (int j = 0; Array[j]; j++)
	{
		if (Array[j] >= 65 && Array[j] <= 90)
		{
			Array[j] = (int)Array[j] + 32;

		}
		else if (Array[j] <= 65 && Array[j] >= 122)
		{
			Array[j];
		}
	}
	std::cout << "In only lowercase characters: " << Array << "\n";
}