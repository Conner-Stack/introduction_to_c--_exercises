#include <iostream>
#include "LinkedList.h"
using namespace std;

struct nodeType
{
	int info;

	nodeType * link;

};



int main()
{
	nodeType * Head;
	nodeType a, b, c;
	c.info = 4;
	b.info = 2;
	a.info = 0;
	c.link = &b;
	b.link = &a;
	Head = &c;
	cout << Head->info << c.link->info << b.link->info;
	system("pause");
	return 0;
}