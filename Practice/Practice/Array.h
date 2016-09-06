#pragma once
#ifndef ARRAY_H
#define ARRAY_H

class ArrayTest
{
private:
	double *aptr;
	int arraySize;
public:
	ArrayTest(int size, double value);
	ArrayTest(ArrayTest &);
	void print() const;
	void setValue(double value);

};

#endif
