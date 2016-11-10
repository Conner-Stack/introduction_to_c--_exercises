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
		Vector2D a = this->x * other;
		Vector2D b = this->y * other;
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

	Vector3D(int a, int b, int c)
	{
		x = a;
		y = b;
		z = c;
	}
	~Vector3D() {};
	Vector3D operator + (Vector3D B)
	{
	
		int a = this->x + B.x;
		int b = this->y + B.y;
		int c = this->z + B.z;
		return Vector3D(a, b, c);
	}
	Vector3D operator - (Vector3D B)
	{
		int a = this->x - B.x;
		int b = this->y - B.y;
		int c = this->z - B.z;
		return Vector3D(a, b, c);
	}
	Vector3D operator * (Vector3D other)
	{
		int a = other.x * this->x;
		int b = other.y * this->y;
		int c = other.z * this->z;
		return Vector3D(a, b, c);
	}
	int tude()
	{
		int tude = sqrt((this->x * this->x) + (this->y * this->y);
		return tude;
	}
	Vector3D normie()
	{
		int disLength = this->tude();

		return Vector3D((this->x / disLength), (this->y / disLength), (this->z / disLength));
	}
	int dot(Vector3D other)
	{
		Vector3D firstVec = this->normie();
		Vector3D secondVec = other.normie();
		int change = this->x * other.x + this->y * other.y;
		return change;
	}
};





