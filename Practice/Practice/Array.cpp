#include <iostream>
#include "Array.h"

#include <iomanip>

using namespace std;

ArrayTest::ArrayTest(int size, double value)
{
	arraySize = size;
	aptr = new double[arraySize];
	for (int i = 0; i < arraySize;i++)
	{
		aptr[i] = value;
	}
};
ArrayTest::ArrayTest(ArrayTest &obj)
{
	arraySize = obj.arraySize;
	aptr = new double[arraySize];
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = obj.aptr[i];
	}

};
void ArrayTest::print() const
{
	for (int i = 0; i < arraySize; i++)
	{
		cout << aptr[i] << " ";
	}
	cout << endl;
};

void ArrayTest::setValue(double value)
{
	for (int i = 0; i < arraySize; i++)
	{
		aptr[i] = value;
	}
}