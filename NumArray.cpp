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