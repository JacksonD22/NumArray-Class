#pragma once
#ifndef NUMARRAY_H
#define NUMARRAY_H

class NumArray {

private:
	int size;
	double* data;
	static const int MAXSIZE = 0;

public:
	static const double SAFE;
	NumArray(int size = MAXSIZE);
	~NumArray();

	void setNum(int index, double value);

	double getNum(int index) const;

	double getMin() const;
	double getMax() const;
	double getAverage() const;

	void print() const;
};

#endif
