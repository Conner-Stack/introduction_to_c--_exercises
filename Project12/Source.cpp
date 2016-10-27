#include <iostream>


using namespace std;


template<typename A>
A Min(A a, A b)
{
	if (a < b)
		return a;
	else if (b < a)
		return b;

}
template<typename A>
A Max(A a, A b)
{
	if (a > b)
		return a;
	else if (b > a)
		return b;

}
template<typename B>
B Clamp(B a, B b, B c)
{
	if ((a > b && a < c) || (a < c && a > b))
		return a;
	else if ((b > c && a > b) || (b < c && a < b))
		return b;
	else if ((c > b && a > c) || (c < b && a < c))
		return c;

}
template<>
char Min(char a, char b)
{
	if (a == b || a - 32 == b || a + 32 == b)
		return NULL;
	else if (a < b - 32 && a + 32 < b)
		return a;
	else if (b < a - 32 && b + 32 < a)
		return b;
}
template<>
char Max(char a, char b)
{
	if (a == b || a - 32 == b || a + 32 == b)
		return NULL;
	else if (a > b + 32 && a - 32 > b)
		return a;
	else if (b > a + 32 && b - 32 > a)
		return b;
}
template<class T>
class arry
{
	//made an array pointer determinant on the given template type, an integer for the size of the array we want, and an integer to locate the index I need
private:
	
	int m_size;
	int m_index;
	//using template for arraypnt 
	T* arraypnt;
public:
	//constructor
	heaparry(int a)
	{
		//setting the size to start at 2, supposed to get size to start at zero however not sure how to multiply by 0
		m_size = a;
		//setting the inde
		m_index = 0;
		a
			rraypnt = new T[m_size];
	}
	//deconstructs the class as soon as it goes out of scope
	~arry() {};
	//adds a variable based on the given template type in a certain slot in the array
	void add(T a)
	{
		//if the index + 1 and m_size are the same, do stuff in the brackets, the +1 is more for the null pointer in character arrays
		if (m_index + 1 == m_size)
		{
			//calling the function to expand the size of the array
			expand();
		}

		m_index++;
		arraypnt[m_index] = a;
	}
//used to double the size of the array should it not have enough space
	void expand()
	{
		//added a "temporary" pointer to store what is currently indexed so I don't lose my data when I delete the data on my main pointer
		T * tmp;
		//giving the temp pointer the new array size as specified
		tmp = new T[m_size *= 2];
		//iterates to the last index before the size cap
				for (int i = 0; i < m_size; i++)
				{
					//copies arrapnt's contents to tmp
					tmp[i] = arraypnt[i];
				}
				//deletes the array data in arraypnt;
			delete[] arraypnt;
			//multiplies the size by 2
			m_size *= 2;
			//gives what's stored in the temp back to the arraypnt
			arraypnt = tmp;
	}
};
int main()
{

	system("pause");
	return 0;
}