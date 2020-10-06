#pragma once
#include <iostream>
#include <string>
#include "Array.h"

using namespace std;

class RangeArray : public Array {
protected:
	int low;
	int high;
public:
	RangeArray(int, int);
	~RangeArray();
	int baseValue();
	int endValue();
	int& operator[](int);
	int operator[](int) const;
};