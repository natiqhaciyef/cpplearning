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

using namespace std;


int main() {
    UserClass user ;
    user.name = "Natiq";
    user.email = "natiq@gmail.com";
    user.age = 21;
    user.phone = "055 386 0054";

    user.getInfo();
    user.getDetailedInfo();

    return 0;
}

