#pragma once
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

class Array {
protected:
	int *data;
	int len;
public:
	Array();
	Array(int size);
	~Array();
	int length() const;
	int& operator[](int i);
	int operator[](int i) const;
	void print();
};
