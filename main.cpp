#include <iostream>
#include "basics/Variables.h"
#include "basics/Operators.h"
#include "basics/StringFunctions.h"
#include "basics/Mathematics.h"
#include "basics/Conditions.h"
#include "basics/Loops.h"
#include "basics/Arrays.h"
#include "basics/Structures.h"
#include "basics/Pointers.h"
#include "basics/Functions.h"
#include "oop/UserClass.h"
#include "oop/AccessModifiers.h"

using namespace std;


int main() {
    int numbers [10] = {1,2,3,2,2,1,2,4,5,2};
    Mathematics math = Mathematics(numbers);

    cout << "Sum of numbers: " << math.sum() << endl;
    cout << "Subtraction of numbers: " << math.subtract()<< endl;
    cout << "Multiplication of numbers: " << math.multiple()<< endl;
    cout << "Division of numbers: " << math.divide()<< endl;

    return 0;
}

