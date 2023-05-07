//
// Created by dwalker on 5/7/23.
//

#include <iostream>
#include "../../udemy.h"

using namespace std;

int euros() {

    const double usd_per_euro {1.19};

    cout << "Welcome to the EUR to USD converter" << endl;
    cout << "Enter the value in EUR:";

    double euros {0.0};
    double dollars {0.0};

    cin >> euros;
    dollars = euros * usd_per_euro;

    cout << euros << " euros is equivalent to " << dollars << " dollars" << endl;

    cout << endl;
    return 0;
}