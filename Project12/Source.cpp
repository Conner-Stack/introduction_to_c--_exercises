#include <iostream>


using namespace std;

template<typename A>
A min(A a, A b)
{
	if (a < b)
		return a;
	else if (b < a)
		return b;

}
template<typename A>
A max(A a, A b)
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
template<typename A>
A minChar(char a, char b)
{
	if (a == b || a - 32 == b || a + 32 == b)
		return NULL;
	else if (a < b - 32 && a + 32 < b)
		return a;
	else if (b < a - 32 && b + 32 < a)
		return b;
}
template<typename A>
A maxChar(char a, char b)
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
private:
	int m_size;
	int m_index;
	T* arraypnt;
public:
	heaparry()
	{
		m_size = 2;
		m_index = 0;
		arraypnt = new T[m_size];
	}
	~arry() {};
	void add(T a)
	{
		T * tmp;
		if (m_index + 1 == m_size)
		{
			expand();
		}
		m_index++;
		arraypnt[m_index] = a;
	}
	void expand()
	{
		T * tmp;
		if (m_index + 1 == m_size)
		{
			tmp = new T[m_size *= 2]
				for (int i = 0; i < m_size + 1; i++)
				{
					tmp[i] = arraypnt[i];
				}
			delete[] arraypnt;
			m_size *= 2;
			arraypnt = tmp;
	}
};
int main()
{
	system("pause");
	return 0;
}