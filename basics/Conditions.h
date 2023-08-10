#include <iostream>
#include <cmath>

using namespace std;


#ifndef CPPLEARNING_CONDITIONS_H
#define CPPLEARNING_CONDITIONS_H

void conditionsUsageWithIfElse() {
    int num1, num2;
    cout << "Enter the first number" << endl;
    cin >> num1;

    cout << "Enter the second number" << endl;
    cin >> num2;

    if (num1 > num2) {
        cout << "First number is greater than Second number" << endl;
    } else if (num2 > num1) {
        cout << "Second number is greater than First number" << endl;
    } else {
        cout << "They are equal" << endl;
    }
}

void conditionsUsageWithSwitchCase() {
    int day;
    cout << "Which day of week ?" << endl;
    cin >> day;

    switch (day) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "This is out of week";
            break;
    }
}

void conditionsUsageTernary() {
    int num1, num2;
    cout << "Enter the first number" << endl;
    cin >> num1;

    cout << "Enter the second number" << endl;
    cin >> num2;

    bool result =
            num1 > num2 ? "First number is greater than Second number" : "Second number is greater than First number";

    cout << result << endl;
}

#endif //CPPLEARNING_CONDITIONS_H
