#include <iostream>

template < typename T>
struct nodeType
{
	int info;

	nodeType * link;

};

template<class T>
class linkedList
{
protected:
	int count;
	nodeType<T> * first;
	nodeType<T> * last;
public:
	linkedList() {};
	bool Add(const T& add)
	{
		if (first == NULL)
		{
			first = add;
			last = first;
			count++;
				return true;
		}
		else
		{
			if (last == first)
			{
				first->link = add;
				last = add;
				count++;
					return true;
			}
			else
			{
				last->link = add;
				last = add;
				count++;
				return true;
			}
		}
		return false;
	}
	T front() const	
	{
	}
	void print()
	{

	}
};






int main()
{



	system("pause");
	return 0;
}



