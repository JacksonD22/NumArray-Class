#include "NumArray.h"
#include <iostream>
#include <random>

using namespace std;
int main() {
	cout << "Verify Begins at 0" << endl;
	NumArray test1(4);
	test1.print(); 
	cout << endl;

	cout << "Valid Indexes" << endl;
	NumArray test2(4);
	test2.setNum(0, 1.5);
	test2.setNum(1, -2); 
	test2.setNum(3, 9);
	cout << test2.getNum(0) << " " << test2.getNum(1) << " " << test2.getNum(3);
	cout << endl; cout << endl;

	cout << "Invalid Indexes" << endl;
	NumArray test3(4);
	cout << test3.getNum(-1) << " " << test3.getNum(4);
	cout << endl; cout << endl;

	cout << "Known Dataset" << endl;
	NumArray test4(4);
	for (int i = 0; i < 4; i++)
		test4.setNum(i, 2 * (i + 1));
	cout << "Min Max Avg" << endl;
	cout << test4.getMin() << "   " << test4.getMax() << "   " << test4.getAverage();
	cout << endl; cout << endl;

	cout << "Random Values" << endl;
	mt19937 gen(1);
	uniform_real_distribution<double> dist(-100, 100);
	NumArray test5(10);
	for (int i = 0; i < 10; i++)
		test5.setNum(i, dist(gen));
	cout << test5.getMin() << " <= " << test5.getAverage() << " <= " << test5.getMax();
	cout << endl; cout << endl;

	cout << "Destructor" << endl;
	{
		NumArray test6(2);
	}
	cout << "after";
	cout << endl; cout << endl;

	cout << "1 Element Array" << endl;
	NumArray test7(1);
	test7.setNum(0, 1);
	cout << "Min Max Avg" << endl;
	cout << test7.getMin() << "   " << test7.getMax() << "   " << test7.getAverage();
	return 0;
}