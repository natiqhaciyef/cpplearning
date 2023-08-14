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

using namespace std;


int main() {
    string greeting = withParameterReturnableFunction("Natiq");
    cout << greeting << endl;
    string greetingDefault = withParameterReturnableFunctionWithDefaultParameter();
    cout << greetingDefault << endl;

    string name = "Natiq" ;
    cout << referenceReturner("Natiq") << endl;
    cout << referenceGetter(&name) << endl;
    cout << referenceAddressConnectingWithParameter(name);
    return 0;
}

