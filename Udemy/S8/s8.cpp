//
// Created by dalton on 5/7/2023.
//

#include <iostream>
#include "../udemy.h"

using namespace std;

int s8() {

//    int num1 {200};
//    int num2 {100};
//
////    cout << num1 << " + " << num2 << " = " << num1+num2 << endl;
//
//    int result {0};
//    result = num1 + num2;
//
//    cout << num1 << " + " << num2 << " = " << result << endl;
//
//    result = num1 % num2;
//    cout << num1 << " % " << num2 << " = " << result << endl;
//
//    cout << 5/10 << endl;
//    cout << 5.0/10.0 << endl;

//    int counter {10};
//    int result {0};

//    cout << "counter: " << counter << endl;
//
//    counter = counter + 1;
//    cout << "counter: " << counter << endl;
//
//    counter++;
//    cout << "counter: " << counter << endl;

//    cout << "counter: " << counter << endl;
//
//    result = counter++ + 10;
//    cout << "counter: " << counter << endl;
//    cout << "result: " << result << endl;


/*
 * Mixed Type Expressions
 */

//    int total_amount {100};
//    int total_number {8};
//    double average {0.0};
//
//    average = total_amount / total_number;
//    cout << average << endl; // displays 12
//
//    average = static_cast<double>(total_amount) / total_number;
//    cout << average << endl; // displays 12.5

//    int total {};
//    int num1 {}, num2 {}, num3 {};
//    const int count {3};
//
//    cout << "Enter 3 integers separated by spaces: ";
//    cin >> num1 >> num2 >> num3;
//
//    total = num1 + num2 + num3;
//    double average {0.0};
//    average = static_cast<double>(total) / count;
//
//    cout << "The 3 numbers were: " << num1 << ", " << num2 << ", " << num3 << endl;
//    cout << "The sum of the numbers is " << total << endl;
//    cout << "The average of the numbers is: " << average << endl;
//
//    cout << endl;

/*
 * Equality Operators
 */

//    bool equal_result {false};
//    bool not_equal_result {false};
//
//    int num1{}, num2{};
//
//    cout << std::boolalpha;
//    cout << "Enter two integers separated by a space: ";
//    cin >> num1 >> num2;
//    equal_result = (num1 == num2);
//    not_equal_result = (num1 != num2);
//

//    char char1{}, char2{};
//    cout << std::boolalpha
//         << "Enter two characters separated by a space: ";
//    cin >> char1 >> char2;
//
//    equal_result = (char1 == char2);
//    not_equal_result = (char1 != char2);
//
//    cout << "Comparison result (equals): " << equal_result << "\n"
//         << "Comparison result (not equals): " << not_equal_result << "\n";
//    cout.flush();

/*
 * Relational Operators
 */

    int num1 {}, num2 {};

    cout << boolalpha
         << "Enter 2 integers separated by a space: ";
    cin >> num1 >> num2;
    cout << "hey!" << endl;
    cout << num1 << " > " << num2 << " : " << (num1 > num2) << "\n"
         << num1 << " >= " << num2 << " : " << (num1 >= num2) << "\n"
         << num1 << " < " << num2 << " : " << (num1 < num2) << "\n"
         << num1 << " <= " << num2 << " : " << (num1 <= num2) << "\n";
    cout.flush();

    return 0;
}