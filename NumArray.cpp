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

double NumArray::getMin() const {
	double min = data[0];
	for (int i = 1; i < size; i++) {
		if (data[i] < min)
			min = data[i];
	}
	return min;
}

double NumArray::getMax() const {
	double max = data[0];
	for (int i = 1; i < size; i++) {
		if (data[i] > max)
			max = data[i];
	}
	return max;
}

double NumArray::getAverage() const {
	double sum = 0;
	for (int i = 0; i < size; i++) {
		sum += data[i];
		double average = sum / size;
		return average;
	}
}