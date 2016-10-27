#include <iostream>

using namespace std;
template <class T>
class Vector
{
private:
	T x;
	T y;
	T z;

public:
	Vector() {};

	 Vector(T a, T b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector() {};
	Vector<T> operator + (Vector B)
	{
		T a = 0;
		T b = 0;
		a = this->x + B.x;
		b = this->y + B.y;
		return Vector(a, b);
	}
	//secondary addition 
	Vector<T> Add(T b)
	{
		return *this + b;
	}
	Vector<T> operator - (Vector B)
	{
		T a = 0;
		T b = 0;
		a = this->x - B.x;
		b = this->y - B.y;
		return Vector(a, b);
	}
	Vector<T> Subtract(T b)
	{
		return *this - b;
}
};


int main()
{
	Vector<int> a = { 2 , 1 };
	Vector<int> b = { 1, 1 };
	Vector<int> c = { 0 , 0 };
	c = a + b;
	c = a - b;
	c = a.Add(b);
	c = a.Subtract(b);
	system("pause");
	return 0;
}
