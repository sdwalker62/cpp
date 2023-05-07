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

    int counter {10};
    int result {0};

//    cout << "counter: " << counter << endl;
//
//    counter = counter + 1;
//    cout << "counter: " << counter << endl;
//
//    counter++;
//    cout << "counter: " << counter << endl;

    cout << "counter: " << counter << endl;

    result = counter++ + 10;
    cout << "counter: " << counter << endl;
    cout << "result: " << result << endl;

    return 0;
}