#pragma once
#include <iostream>
#include <cassert>
using namespace std;

class Vector2D
{
private:
	float x;
	float y;
	float z;

public:
	Vector2D() {};

	Vector2D(float a, float b)
	{
		x = a;
		y = b;
		z = NULL;
	}
	~Vector2D() {};
	Vector2D operator + (Vector2D B)
	{

	float a = this->x + B.x;
	float	b = this->y + B.y;
		return Vector2D(a, b);
	}
	 Vector2D operator - (Vector2D B)
	{
		float	a = this->x - B.x;
		float	b = this->y - B.y;
		return Vector2D(a, b);
	}
	Vector2D operator * (Vector2D other)
	{
		float a = this->x * other.x;
		float b = this->y * other.y;
		return Vector2D(a, b);
	}
	float tude()
	{
		float tude = sqrt(this->x * this->x) + (this->y * this->y);
		return tude;
	}
	Vector2D normie()
	{
		float disLength = this->tude();
		return Vector2D((this->x / disLength), (this->y / disLength));
	}
	float dot(Vector2D other)
	{
		Vector2D firstVec = this->normie();
		Vector2D secondVec = other.normie();
		float change = this->x * other.x + this->y * other.y;
		return change;
	}
};
class Vector3D
{
private:
	float x;
	float y;
	float z;

public:
	Vector3D() {};

	Vector3D(float a, float b, float c)
	{
		x = a;
		y = b;
		z = c;
	}
	~Vector3D() {};
	Vector3D operator + (Vector3D B)
	{
	
		float a = this->x + B.x;
		float b = this->y + B.y;
		float c = this->z + B.z;
		return Vector3D(a, b, c);
	}
	Vector3D operator - (Vector3D B)
	{
		float a = this->x - B.x;
		float b = this->y - B.y;
		float c = this->z - B.z;
		return Vector3D(a, b, c);
	}
	Vector3D operator * (Vector3D other)
	{
		float a = other.x * this->x;
		float b = other.y * this->y;
		float c = other.z * this->z;
		return Vector3D(a, b, c);
	}
	float tude()
	{
		float tude = sqrt(this->x * this->x) + (this->y * this->y) + (this->z * this->z);
		return tude;
	}
	Vector3D normie()
	{
		float disLength = this->tude();
		Vector3D newvect = Vector3D(this->x / disLength, this->y / disLength, this->z / disLength);
		return newvect;
	}
	int dot(Vector3D other)
	{
		Vector3D firstVec = this->normie();
		Vector3D secondVec = other.normie();
		float change = (this->x * other.x) + (this->y * other.y) + (this->z * other.z);
		return change;
	}
	Vector3D crossprod(Vector3D other)
	{
		Vector3D Product = Vector3D((this->y * other.z) - (other.y * this->z), (this->x * other.z) - (other.x * this->z), (this->x * other.y) - (other.x * this->y));
		return Product;
	}
	};
class Vector4D
{
private:
	float x;
	float y;
	float z;
	float w;

public:
	Vector4D() {};

	Vector4D(float a, float b, float c, float d)
	{
		x = a;
		y = b;
		z = c;
		w = d;
	}
	~Vector4D() {};
	Vector4D operator + (Vector4D B)
	{

		float a = this->x + B.x;
		float b = this->y + B.y;
		float c = this->z + B.z;
		float d = this->w + B.w;
		return Vector4D(a, b, c, d);
	}
	Vector4D operator - (Vector4D B)
	{
		float a = this->x - B.x;
		float b = this->y - B.y;
		float c = this->z - B.z;
		float d = this->w = B.w;
		return Vector4D(a, b, c, d);
	}
	Vector4D operator * (Vector4D other)
	{
		float a = other.x * this->x;
		float b = other.y * this->y;
		float c = other.z * this->z;
		float d = other.w * this->w;
		return Vector4D(a, b, c, d);
	}
	float tude()
	{
		float tude = sqrt(this->x * this->x) + (this->y * this->y) + (this->z * this->z) + (this->w * this->w);
		return tude;
	}
	Vector4D normie()
	{
		float disLength = this->tude();
		Vector4D newvect = Vector4D(this->x / disLength, this->y / disLength, this->z / disLength, this->w / disLength);
		return newvect;
	}
	int dot(Vector4D other)
	{
		Vector4D firstVec = this->normie();
		Vector4D secondVec = other.normie();
		float change = (this->x * other.x) + (this->y * other.y) + (this->z * other.z) + (this->w * other.z);
		return change;
	}
};

class Matrix2
{
private:
	Vector2D vec1;
	Vector2D vec2;
	
public:
	Matrix2() {};
	Matrix2(float a, float b, float c, float d)
	{
		vec1 = Vector2D(a, b);
		vec2 = Vector2D(c, d);

	}
		~Matrix2() {};
		Vector2D operator *(Vector2D vec)
		{
		



		}
};







