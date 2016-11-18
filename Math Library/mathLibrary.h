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
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getZ()
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
	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
	int getZ()
	{
		return z;
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
	//float m_vec1[3];
	//float m_vec2[3];
	//float m_vec3[3];
	float m_vec[3][3];
public:
	Matrix3() {};
	Matrix3(float a1, float a2, float a3, float b1, float b2, float b3, float c1, float c2, float c3)
	{
		m_vec[0][0] = a1;
		m_vec[0][1] = a2;
		m_vec[0][2] = a3;
		m_vec[1][0] = b1;
		m_vec[1][1] = b2;
		m_vec[1][2] = b3;
		m_vec[2][0] = c1;
		m_vec[2][1] = c2;
		m_vec[2][2] = c3;
		//m_vec1[0] = a1;
		//m_vec1[1] = a2;
		//m_vec1[2] = a3;
		//m_vec2[0] = b1;
		//m_vec2[1] = b2;
		//m_vec2[2] = b3;
		//m_vec3[0] = c1;
		//m_vec3[1] = c2;
		//m_vec3[2] = c3;
	}
	Matrix3(float a[3][3])
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				m_vec[i][j] = a[i][j];

			}
		}
	}
	~Matrix3() {};
	Vector3D operator *(Vector3D vec)
	{
		float simplify[3] = { vec.getX(), vec.getY, vec.getZ };
		float answer[3] = { 0, 0, 0 };
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				answer[i] += (this->m_vec[i][j] * simplify[j]);
			}
		}

		return Vector3D(answer[0], answer[1], answer[2]);
	}
	Matrix3 operator *(Matrix3 other)
	{
		float answer[3][3];
		for (int i = 0; i < 3; i++)
		{

			for (int j = 0; j < 3; j++)
			{
				answer[i][j] = 0;
				for (int k = 0; k < 3; k++)
				{
					answer[i][j] += (this->m_vec[j][k] * other.m_vec[j][k]);
				}
			}
		}	
		Matrix3 tmp =  Matrix3(answer);
		return tmp;
	}
	





};