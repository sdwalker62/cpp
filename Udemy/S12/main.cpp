//
// Created by Dalton on 12/23/2023
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int main() {
	int num{10};

	cout << "\n" << endl;
	cout << "Value of num is: " << num << endl;
	cout << "Address of num is: " << &num << endl;
	cout << "sizeof of num is: " << sizeof num << endl;  // bytes

	// --------------------------------------------------------------------------------
	int *p;

	cout << "\n" << endl;
	cout << "Value of p is: " << p << endl;
	cout << "Address of p is: " << &p << endl;
	cout << "sizeof of p is: " << sizeof p << endl;  // bytes

	p = nullptr;
	cout << "Value of p is: " << p << endl;

	// --------------------------------------------------------------------------------

	// The compiler will check that the type of the pointer matches that of the value
	// that it points to.

	/*
	double high_temp{100.7};
	double low_temp{37.2};

	double *temp_ptr;

	temp_ptr = &high_temp;
	temp_ptr = &low_temp;

	temp_ptr = nullptr;
	*/
	// --------------------------------------------------------------------------------
	/*
	int *p1 {nullptr};
	double *p2 {nullptr};
	unsigned long long *p3 {nullptr};
	vector<string> *p4 {nullptr};
	string *p5 {nullptr};

	// All of these should print the same size since pointers are all sized equivalently.
	cout << "\n" << endl;
	cout << "sizeof p1 is: " << sizeof p1 << endl;
	cout << "sizeof p2 is: " << sizeof p2 << endl;
	cout << "sizeof p3 is: " << sizeof p3 << endl;
	cout << "sizeof p4 is: " << sizeof p4 << endl;
	cout << "sizeof p5 is: " << sizeof p5 << endl;
	*/
	// --------------------------------------------------------------------------------
	int score {10};
	double high_temp {100.7};

	int *score_ptr {nullptr};
	score_ptr = &score;

	cout << "\n" << endl;
	cout << "Value of score is: " << score << endl;
	cout << "Address of score is: " << &score << endl;
	cout << "Value of score_ptr is: " << score_ptr << endl;

	// score_ptr = &high_temp;  // compiler error

	cout << endl;
	return 0;
};