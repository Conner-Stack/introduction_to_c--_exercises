#include <iostream>
#include <string>
#include <stdlib.h>

using std::string;
using namespace std;

class Animal
{
public:
	Animal() {};
	 virtual void speak()
	{}

};

class Bird : public Animal
{
public:
	Bird() {};
	void speak()
	{
		cout << "tweet tweet tweet " << endl;
	}

};

class Mammal : public Animal
{
public:
	Mammal() {};
	void bark()
	{}

	void speak()
{}

};

class Cat : public Mammal
{
public:
	Cat() {};
	void speak()
	{
		cout << "meow";
	}
	void purr()
	{
		cout << "grumpycat purr";
}
};

class Dog : public Mammal
{
public:
	Dog() {};
	void speak()
	{
		cout << "woof" << endl;
	}

	void bark()
	{
		cout << "bark bark" << endl;
	}

};



int main()
{
	Bird bird;
	Mammal mammal;
	Dog d;
	Cat c;
	Animal* ptr;

	ptr = &bird;
		ptr->speak();
	
	ptr = &d;
	ptr->speak();

	ptr = d.bark;
	cout << *ptr << endl;

	ptr = c.speak;
	cout << ptr << endl;

	ptr = c.purr;
	cout << *ptr << endl;






	system("pause");
	return 0;
}