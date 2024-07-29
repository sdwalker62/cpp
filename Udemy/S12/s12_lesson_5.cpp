/*
	-----------------------------------------------------------------------------------
	Section 12.5
	Derefencing a Pointer
	Date: December 23, 2023
	-----------------------------------------------------------------------------------
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int s12_lesson_5(){
	int score {100};
	int *score_ptr {&score};

	cout << *score_ptr << endl;

	*score_ptr = 200;
	cout << *score_ptr << endl;
	cout << score << endl;

	cout << "\n--------------------------------------------------------------" << endl;
	double high_temp {100.7};
	double low_temp {37.4};
	double *temp_ptr {&high_temp};

	cout << *temp_ptr << endl;
	temp_ptr = &low_temp;
	cout << *temp_ptr << endl;

	cout << "\n--------------------------------------------------------------" << endl;
	string name {"Dalton"};
	string *string_ptr {&name};
	
	cout << *string_ptr << endl;
	name = "Brianna";
	cout << *string_ptr << endl;

	cout << "\n--------------------------------------------------------------" << endl;
	vector<string> household {"Dalton", "Brianna", "PJ", "Luna"};
	vector<string> *vector_ptr {nullptr};

	vector_ptr = &household;

	/*
	We use the () around *vector_ptr because the . operators has a higher
	precedence than the de-reference operator. If we did not have this here
	we would instead attempt to retrieve the first element of the pointer,
	and not what the pointer is referencing!
	*/
	cout << "First member of the household: " << (*vector_ptr).at(0) << endl;

	cout << "Household: ";
	for (auto member: *vector_ptr) {
		cout << member << " ";
	}
	cout << endl;

	cout << endl;
	return 0;
};