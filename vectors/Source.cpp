#include <iostream>
#include <cassert>
using namespace std;
template <class T>
class Vector2D
{
private:
	T x;
	T y;
	T z;

public:
	Vector2D() {};

	 Vector2D(T a, T b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector2D() {};
	Vector2D<T> operator + (Vector2D B)
	{
		T a = 0;
		T b = 0;
		a = this->x + B.x;
		b = this->y + B.y;
		return Vector2D(a, b);
	}
	Vector2D<T> operator - (Vector2D B)
	{
		Vector2D a = 0;
		Vector2D b = 0;
		a = this->x - B.x;
		b = this->y - B.y;
		return Vector2D(a, b);
	}
	Vector2D<T> operator * (Vector2D other)
	{
		T a = other * this->x;
		T b = other * this->y;
		return Vector2D(a, b);
	}
T tude()
{
	T tude = sqrt((this->x * this->x) + (this->y * this->y);
		return tude;
}
Vector2D<T> normie()
{
	T disLength = this->tude();

	return (this.x/disLength) , (this.y/disLength)
}
T dot(Vector2D other)
{
	Vector2D firstVec = this->normie();
	Vector2D secondVec = other.normie();
	T change = this->x * other.x + this->y * other.y;
	return change;
}
};
template<class T>
class Vector3D
{
private:
	T x;
	T y;
	T z;

public:
	Vector3D() {};

	 Vector3D(T a, T b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector3D() {};
	Vector3D<T> operator + (Vector2D B)
	{
		T a = 0;
		T b = 0;
		a = this->x + B.x;
		b = this->y + B.y;
		return Vector2(a, b);
	}
	Vector3D<T> operator - (Vector2D B)
	{
		Vector2 a = 0;
		Vector2 b = 0;
		a = this->x - B.x;
		b = this->y - B.y;
		return Vector2(a, b);
	}
	Vector3D<T> operator * (Vector3D other)
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
Vector3D<T> normie()
{
	T disLength = this->tude();

	return (this.x/disLength) , (this.y/disLength)
}
T dot(Vector3D other)
{
	Vector2 firstVec = this->normie();
	Vector2 secondVec = other.normie();
	T change = this->x * other.x + this->y * other.y;
	return change;
}
};
int main()
{
	Vector3D<int> a = { 2 , 1 };
	Vector3D<int> b = { 1, 1 };
	Vector3D<int> c = { 0 , 0 };
	c = a + b;
	c = a - b;
	c = a.Add(b);
	c = a.Subtract(b);
	system("pause");
	return 0;
}
