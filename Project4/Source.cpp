#include <iostream>

using namespace std;

class cat
{
private:
	char m_name;
public:
	cat() {};
	void nameMe(char catname)
	{
		m_name = catname;
	}
};

int main()
{

	int i = 0;
	int count = 0;
	char bigcat = 'A';
	char smallcat = 'b';

	cat feline[26];

	while (count < 13)
	{
		
		feline[i].nameMe(bigcat);
		bigcat += 2;
		i++;
		feline[i].nameMe(smallcat);
		smallcat += 2;
		i++;
		count++;
	}

	system("pause");
	return 0;
}