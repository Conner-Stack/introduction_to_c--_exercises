#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class Vector2D
{
private:
	int x;
	int y;
	int z;

public:
	Vector2D() {};

	Vector2D(int a, int b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector2D() {};
	Vector2D operator + (Vector2D B)
	{

	int	a = this->x + B.x;
	int	b = this->y + B.y;
		return Vector2D(a, b);
	}
	 Vector2D operator - (Vector2D B)
	{
	int	a = this->x - B.x;
	int	b = this->y - B.y;
		return Vector2D(a, b);
	}
	Vector2D operator * (Vector2D other)
	{
		int a = this->x * other.x;
		int b = this->y * other.y;
		return Vector2D(a, b);
	}
	int tude()
	{
		int tude = sqrt((this->x * this->x) + (this->y * this->y));
		return tude;
	}
	Vector2D normie()
	{
		int disLength = this->tude();
		return Vector2D((this->x / disLength), (this->y / disLength));
	}
	  int dot(Vector2D other)
	{
		Vector2D firstVec = this->normie();
		Vector2D secondVec = other.normie();
		int change = this->x * other.x + this->y * other.y;
		return change;
	}
};
class Vector3D
{
private:
	int x;
	int y;
	int z;

public:
	Vector3D() {};

	Vector3D(int a, int b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector3D() {};
	Vector3D operator + (Vector3D B)
	{
		T a = 0;
		T b = 0;
		a = this->x + B.x;
		b = this->y + B.y;
		return Vector3D(a, b);
	}
	Vector3 operator - (Vector3D B)
	{
		Vector3D a = 0;
		Vector3D b = 0;
		a = this->x - B.x;
		b = this->y - B.y;
		return Vector3D(a, b);
	}
	Vector3D operator * (Vector3D other)
	{
		T a = other * this->x;
		T b = other * this->y;
		return Vector3D(a, b);
	}
	T tude()
	{
		T tude = sqrt((this->x * this->x) + (this->y * this->y);
		return tude;
	}
	Vector3D normie()
	{
		T disLength = this->tude();

		return (this.x / disLength), (this.y / disLength)
	}
	int dot(Vector3D other)
	{
		Vector3D firstVec = this->normie();
		Vector3D secondVec = other.normie();
		int change = this->x * other.x + this->y * other.y;
		return change;
	}
};





