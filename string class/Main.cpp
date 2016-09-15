#include <iostream>
#include "String.h"

using namespace std;

int main()
{
	Strings daString = Strings("Hello");
	int length = daString.length();
	cout << "the length of your word is: " << length << endl;
	char letterblock = daString.indexchar(4);
	cout << "you picked letter: " << letterblock << endl;
	int result = daString.compare("Hello");
	cout << "is value the same? " << result << endl;
	char append = daString.append("hola");
	cout << "string appended to prior string " << append << endl;
	
	
	system("pause");
	return 0;
}