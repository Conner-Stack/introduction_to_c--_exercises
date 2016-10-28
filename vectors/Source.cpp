#include <iostream>
#include <cassert>
using namespace std;
template <class T>
class Vector2
{
private:
	T x;
	T y;
	T z;

public:
	Vector2() {};

	 Vector2(T a, T b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector2() {};
	Vector2<T> operator + (Vector2 B)
	{
		T a = 0;
		T b = 0;
		a = this->x + B.x;
		b = this->y + B.y;
		return Vector2(a, b);
	}
	Vector2<T> operator - (Vector2 B)
	{
		Vector2 a = 0;
		Vector2 b = 0;
		a = this->x - B.x;
		b = this->y - B.y;
		return Vector2(a, b);
	}
	Vector2<T> operator * (Vector2 other)
	{
		T a = other * this->x;
		T b = other * this->y;
		return Vector2(a, b);
	}
T tude()
{
	T tude = sqrt((this->x * this->x) + (this->y * this->y);
		return tude;
}
Vector2<T> normie()
{
	T disLength = this->tude();

	return (this.x/disLength) , (this.y/disLength)
}
T dot(Vector2 other)
{
	Vector2 firstVec = this->normie();
	Vector2 secondVec = other.normie();
	T change = this->x * other.x + this->y * other.y;
	return change;
}
};
template<class T>
class Vector3
{
private:
	T x;
	T y;
	T z;

public:
	Vector3() {};

	 Vector3(T a, T b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector3() {};
	Vector3<T> operator + (Vector2 B)
	{
		T a = 0;
		T b = 0;
		a = this->x + B.x;
		b = this->y + B.y;
		return Vector2(a, b);
	}
	Vector3<T> operator - (Vector2 B)
	{
		Vector2 a = 0;
		Vector2 b = 0;
		a = this->x - B.x;
		b = this->y - B.y;
		return Vector2(a, b);
	}
	Vector3<T> operator * (Vector3 other)
	{
		T a = other * this->x;
		T b = other * this->y;
		return Vector2(a, b);
	}
T tude()
{
	T tude = sqrt((this->x * this->x) + (this->y * this->y);
		return tude;
}
Vector3<T> normie()
{
	T disLength = this->tude();

	return (this.x/disLength) , (this.y/disLength)
}
T dot(Vector3 other)
{
	Vector2 firstVec = this->normie();
	Vector2 secondVec = other.normie();
	T change = this->x * other.x + this->y * other.y;
	return change;
}
};
int main()
{
	Vector3<int> a = { 2 , 1 };
	Vector3<int> b = { 1, 1 };
	Vector3<int> c = { 0 , 0 };
	c = a + b;
	c = a - b;
	c = a.Add(b);
	c = a.Subtract(b);
	system("pause");
	return 0;
}
