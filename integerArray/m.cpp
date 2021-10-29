#include "pch.h"
#include "m.h"
#include <iostream>

Array::Array(int arraySize)
{
	size = (arraySize > 0 ? arraySize : 10);
	ptr = new int[size];

	for (int i = 0; i < size; i++)
		ptr[i] = 0;
}


Array::~Array()
{
	delete[] ptr; 
} 


int Array::getSize() const
{
	return size; 
} 


const Array& Array::operator=(const Array& right)
{
	if (&right != this) 
	{
		if (size != right.size)
		{
			delete[] ptr; 
			size = right.size; 
			ptr = new int[size]; 
		} 

		for (int i = 0; i < size; i++)
			ptr[i] = right.ptr[i];
	}

	return *this; 
} 


bool Array::operator==(const Array& right) const
{
	if (size != right.size)
		return false;

	for (int i = 0; i < size; i++)
		if (ptr[i] != right.ptr[i])
			return false; 

	return true; 
} 

istream& operator>>(istream& input, Array& a)
{
	for (int i = 0; i < a.size; i++)
		input >> a.ptr[i];

	return input; 
}


ostream& operator<<(ostream& output,Array& a)
{
	int i;
	for (i = 0; i < a.size; i++)
	{
		output << a.ptr[i];

		if ((i + 1) % 4 == 0) 
			output;
	}

	if (i % 4 != 0)
		output;

	return output;
} 