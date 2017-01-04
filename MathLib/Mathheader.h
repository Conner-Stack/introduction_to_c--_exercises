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
		float    b = this->y + B.y;
		return Vector2D(a, b);
	}
	Vector2D operator - (Vector2D B)
	{
		float    a = this->x - B.x;
		float    b = this->y - B.y;
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
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
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
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	float getZ()
	{
		return z;
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
	float getX()
	{
		return x;
	}
	float getY()
	{
		return y;
	}
	float getZ()
	{
		return z;
	}
	float getW()
	{
		return w;
	}
};

class Matrix2
{
private:
	float m_vec1[2];
	float m_vec2[2];

public:
	Matrix2() {};
	Matrix2(float a, float b, float c, float d)
	{
		m_vec1[0] = a;
		m_vec1[1] = b;

		m_vec2[0] = c;
		m_vec2[1] = d;
	}
	~Matrix2() {};
	Vector2D operator *(Vector2D vec)
	{
		float a = (this->m_vec1[0] * vec.getX()) + (this->m_vec1[1] * vec.getY());
		float b = (this->m_vec2[0] * vec.getX()) + (this->m_vec2[0] * vec.getY());

		return Vector2D(a, b);

	}
	Matrix2 operator *(Matrix2 other)
	{
		float vec1 = (this->m_vec1[0] * other.m_vec1[0]) + (this->m_vec1[1] * other.m_vec1[1]);
		float vec2 = (this->m_vec1[0] * other.m_vec2[0]) + (this->m_vec1[1] * other.m_vec1[2]);

		float vec3 = (this->m_vec2[0] * other.m_vec1[0]) + (this->m_vec2[1] * other.m_vec1[1]);
		float vec4 = (this->m_vec2[0] * other.m_vec2[0]) + (this->m_vec2[1] * other.m_vec2[2]);

		return Matrix2(vec1, vec2, vec3, vec4);
	}
};


class Matrix3
{
private:
	float m_vec1[3];
	float m_vec2[3];
	float m_vec3[3];

public:
	Matrix3() {};
	Matrix3(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3)
	{
		m_vec1[0] = a1;
		m_vec1[1] = a2;
		m_vec1[2] = a3;
		m_vec2[0] = b1;
		m_vec2[1] = b2;
		m_vec2[2] = b3;
		m_vec3[0] = c1;
		m_vec3[1] = c2;
		m_vec3[2] = c3;
	}
	~Matrix3() {};
	Vector3D operator *(Vector3D vec)
	{
		float a = (this->m_vec1[0] * vec.getX()) + (this->m_vec2[0] * vec.getY()) + (this->m_vec3[0] * vec.getZ());
		float b = (this->m_vec1[1] * vec.getX()) + (this->m_vec2[1] * vec.getY()) + (this->m_vec3[1] * vec.getZ());
		float c = (this->m_vec1[2] * vec.getX()) + (this->m_vec2[2] * vec.getY()) + (this->m_vec3[2] * vec.getZ());

		return Vector3D(a, b, c);
	}
	Matrix3 operator *(Matrix3 other)
	{
		float a = (this->m_vec1[0] * other.m_vec1[0]) + (this->m_vec1[1] * other.m_vec1[1]) + (this->m_vec1[2] * other.m_vec1[2]);
		float b = (this->m_vec1[0] * other.m_vec2[0]) + (this->m_vec1[1] * other.m_vec2[1]) + (this->m_vec1[2] * other.m_vec2[2]);
		float c = (this->m_vec1[0] * other.m_vec3[0]) + (this->m_vec1[1] * other.m_vec3[1]) + (this->m_vec1[2] * other.m_vec3[2]);

		float d = (this->m_vec2[0] * other.m_vec1[0]) + (this->m_vec2[1] * other.m_vec1[1]) + (this->m_vec2[2] * other.m_vec1[2]);
		float e = (this->m_vec2[0] * other.m_vec2[0]) + (this->m_vec2[1] * other.m_vec2[1]) + (this->m_vec2[2] * other.m_vec2[2]);
		float f = (this->m_vec2[0] * other.m_vec3[0]) + (this->m_vec2[1] * other.m_vec3[1]) + (this->m_vec2[2] * other.m_vec3[2]);

		float g = (this->m_vec3[0] * other.m_vec1[0]) + (this->m_vec3[1] * other.m_vec1[1]) + (this->m_vec3[2] * other.m_vec1[2]);
		float h = (this->m_vec3[0] * other.m_vec2[0]) + (this->m_vec3[1] * other.m_vec2[1]) + (this->m_vec3[2] * other.m_vec2[2]);
		float i = (this->m_vec3[0] * other.m_vec3[0]) + (this->m_vec3[1] * other.m_vec3[1]) + (this->m_vec3[2] * other.m_vec3[2]);

		return Matrix3(a, b, c, d, e, f, g, h, i);
	}

};
class Matrix4
{
private:
	float m_vec1[4];
	float m_vec2[4];
	float m_vec3[4];
	float m_vec4[4];
public:
	Matrix4() {};
	Matrix4(float a1, float a2, float a3, float a4, float b1, float b2, float b3, float b4, float c1, float c2, float c3, float c4, float d1, float d2, float d3, float d4)
	{
		m_vec1[0] = a1;
		m_vec1[1] = a2;
		m_vec1[2] = a3;
		m_vec1[3] = a4;
		m_vec2[0] = b1;
		m_vec2[1] = b2;
		m_vec2[2] = b3;
		m_vec2[3] = b4;
		m_vec3[0] = c1;
		m_vec3[1] = c2;
		m_vec3[2] = c3;
		m_vec3[3] = c4;
		m_vec4[0] = d1;
		m_vec4[1] = d2;
		m_vec4[2] = d3;
		m_vec4[3] = d4;
	}
	~Matrix4() {};

	Vector4D operator *(Vector4D other)
	{

		float a = (this->m_vec1[0] * other.getX()) + (this->m_vec2[0] * other.getY()) + (this->m_vec3[0] * other.getZ()) + (this->m_vec4[0] * other.getW());
		float b = (this->m_vec1[1] * other.getX()) + (this->m_vec2[1] * other.getY()) + (this->m_vec3[1] * other.getZ()) + (this->m_vec4[1] * other.getW());
		float c = (this->m_vec1[2] * other.getX()) + (this->m_vec2[2] * other.getY()) + (this->m_vec3[2] * other.getZ()) + (this->m_vec4[2] * other.getW());
		float d = (this->m_vec1[3] * other.getX()) + (this->m_vec2[3] * other.getY()) + (this->m_vec3[3] * other.getZ()) + (this->m_vec4[3] * other.getW());
		return Vector4D(a, b, c, d);
	}

	Matrix4 operator *(Matrix4 other)
	{
		float a = (this->m_vec1[0] * other.m_vec1[0]) + (this->m_vec1[1] * other.m_vec1[1]) + (this->m_vec1[2] * other.m_vec1[2]) + (this->m_vec1[3] * other.m_vec1[3]);
		float b = (this->m_vec1[0] * other.m_vec2[0]) + (this->m_vec1[1] * other.m_vec2[1]) + (this->m_vec1[2] * other.m_vec2[2]) + (this->m_vec1[3] * other.m_vec2[3]);;
		float c = (this->m_vec1[0] * other.m_vec3[0]) + (this->m_vec1[1] * other.m_vec3[1]) + (this->m_vec1[2] * other.m_vec3[2]) + (this->m_vec1[3] * other.m_vec3[3]);;
		float d = (this->m_vec1[0] * other.m_vec4[0]) + (this->m_vec1[1] * other.m_vec4[1]) + (this->m_vec1[2] * other.m_vec4[2]) + (this->m_vec1[3] * other.m_vec4[3]);;

		float e = (this->m_vec2[0] * other.m_vec1[0]) + (this->m_vec2[1] * other.m_vec1[1]) + (this->m_vec2[2] * other.m_vec1[2]) + (this->m_vec2[3] * other.m_vec1[3]);
		float f = (this->m_vec2[0] * other.m_vec2[0]) + (this->m_vec2[1] * other.m_vec2[1]) + (this->m_vec2[2] * other.m_vec2[2]) + (this->m_vec2[3] * other.m_vec2[3]);
		float g = (this->m_vec2[0] * other.m_vec3[0]) + (this->m_vec2[1] * other.m_vec3[1]) + (this->m_vec2[2] * other.m_vec3[2]) + (this->m_vec2[3] * other.m_vec3[3]);
		float h = (this->m_vec2[0] * other.m_vec4[0]) + (this->m_vec2[1] * other.m_vec4[1]) + (this->m_vec2[2] * other.m_vec4[2]) + (this->m_vec2[3] * other.m_vec4[3]);

		float i = (this->m_vec3[0] * other.m_vec1[0]) + (this->m_vec3[1] * other.m_vec1[1]) + (this->m_vec3[2] * other.m_vec1[2]) + (this->m_vec3[3] * other.m_vec1[3]);
		float j = (this->m_vec3[0] * other.m_vec2[0]) + (this->m_vec3[1] * other.m_vec2[1]) + (this->m_vec3[2] * other.m_vec2[2]) + (this->m_vec3[3] * other.m_vec2[3]);
		float k = (this->m_vec3[0] * other.m_vec3[0]) + (this->m_vec3[1] * other.m_vec3[1]) + (this->m_vec3[2] * other.m_vec3[2]) + (this->m_vec3[3] * other.m_vec3[3]);
		float l = (this->m_vec3[0] * other.m_vec4[0]) + (this->m_vec3[1] * other.m_vec4[1]) + (this->m_vec3[2] * other.m_vec4[2]) + (this->m_vec3[3] * other.m_vec4[3]);

		float m = (this->m_vec4[0] * other.m_vec1[0]) + (this->m_vec4[1] * other.m_vec1[1]) + (this->m_vec4[2] * other.m_vec1[2]) + (this->m_vec4[3] * other.m_vec1[3]);
		float n = (this->m_vec4[0] * other.m_vec2[0]) + (this->m_vec4[1] * other.m_vec2[1]) + (this->m_vec4[2] * other.m_vec2[2]) + (this->m_vec4[3] * other.m_vec2[3]);
		float o = (this->m_vec4[0] * other.m_vec3[0]) + (this->m_vec4[1] * other.m_vec3[1]) + (this->m_vec4[2] * other.m_vec3[2]) + (this->m_vec4[3] * other.m_vec3[3]);
		float p = (this->m_vec4[0] * other.m_vec4[0]) + (this->m_vec4[1] * other.m_vec4[1]) + (this->m_vec4[2] * other.m_vec4[2]) + (this->m_vec4[3] * other.m_vec4[3]);
		return Matrix4(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
	}
};
