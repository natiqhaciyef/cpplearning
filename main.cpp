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
#include "oop/encapsulation/Encapsulation.h"
#include "oop/inheritance//Audi.h"
#include "oop/inheritance//Tesla.h"

using namespace std;
// tree frog

int main() {
    Audi rs7 = Audi("rs7",41000,2);
    Tesla modelS = Tesla("Model S",38000,4);
    rs7.getInfo();
    modelS.getInfo();

    return 0;
}

