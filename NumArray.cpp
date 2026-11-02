#include "NumArray.h"
#include <iostream>
using namespace std;

const double NumArray::SAFE = 0;

NumArray::NumArray(int size) { 
	this->size = (size >= 1) ? size : MAXSIZE;
	data = new double[this->size];
	for (int i = 0; i < this->size; i++) {
		data[i] = 0;
	}
}

NumArray::~NumArray() { 
	delete[] data;
	data = nullptr;
}

void NumArray::setNum(int index, double value) {
	if (index >= 0 && index < size) {
		data[index] = value;
	}
}

double NumArray::getNum(int index) const {
	if (index >= 0 && index < size) {
		return data[index];
	}
	return SAFE;
}


