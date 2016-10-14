#pragma once
#include <iostream>
#include "string.h"

template <typename T>
class Bucket
{	
public:
	Bucket(int) {};
	const int m_size;
	T items[m_size];
		bool Add(T);

};

