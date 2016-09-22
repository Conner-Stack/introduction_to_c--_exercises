
#include "String.h"



int main()
{
	Strings daString = Strings("Hello");
	Strings daString2 = Strings("goodbye");
	int length = daString.length();
	cout << "the length of your word is: " << length << endl;
	char letterblock = daString.indexchar(4);
	cout << "you picked letter: " << letterblock << endl;
	bool result = daString.compare(daString2);
	cout << "is the length true or false? " << result << endl;
	Strings appendedString = daString.append(daString2);
	appendedString.printWord();
	Strings PrependedString = daString.prepend(daString2);
	PrependedString.printWord();
	const char* constant = daString.constant();
	cout << constant << endl;
	Strings lowercase = daString.lowercase();
	lowercase.printWord();
	Strings uppercase = daString.uppercase();
	uppercase.printWord();
	system("pause");
	return 0;
}

