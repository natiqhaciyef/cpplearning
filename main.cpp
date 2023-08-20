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
#include "oop/Encapsulation.h"

using namespace std;
// tree frog

int main() {
    Cart cart = Cart();
    cart.setUsername("Natiq");
    cout << cart.getVerificationId() << endl;
    cout << cart.getUsername() << endl;

    return 0;
}

