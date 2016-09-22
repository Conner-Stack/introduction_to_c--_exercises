
#include "String.h"



int main()
{
	Strings daString = Strings("Hello");
	Strings daString2 = Strings("goodbye");
	int length = daString.length();
	cout << "the length of your word is: " << length << endl;
	char letterblock = daString.indexchar(4);
	cout << "you picked letter: " << letterblock << endl;
	int result = daString.compare("Hello");
	cout << "is value the same? " << result << endl;
	Strings appendedString = daString.append(daString2);
	appendedString.printWord();
	Strings PrependedString = daString.prepend(daString2);
	PrependedString.printWord();
	const char* constant = daString.constant();
	cout << constant << endl;
	char lowercase = daString.lowercase();
	cout << lowercase << endl;
	system("pause");
	return 0;
}

