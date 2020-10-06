#include "RangeArray.h"

RangeArray::RangeArray(int Base, int End) :Array::Array(End - Base + 1) {
	low = Base;
	high = End;
}
RangeArray::~RangeArray(){
}
int RangeArray:: baseValue()
{
	return low;
}
int RangeArray::endValue() {
	return high;
}
int& RangeArray:: operator[](int num){
	return Array::operator[](num - low);
}
int RangeArray::operator [](int num) const{
	int temp = Array::operator[](num-low);
	return temp;
}

