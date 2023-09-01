#include <iostream>
#include <fstream>
#include <cstdio>

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
#include "oop/polymorphism/Dog.h"
#include "oop/polymorphism/Cat.h"
#include "oop/polymorphism/Animal.h"
#include "oop/abstraction/Triangle.h"
#include "oop/abstraction/Rectangle.h"
#include "files/FileManagement.h"
#include "advanced/Queue.h"
#include "advanced/Set.h"

using namespace std;
// tree frog

int main() {
    Set set = Set();
    set.add(45);
    set.add(12);
    set.add(88);
    set.add(88);
    set.add(71);

    cout << set.getSize() << endl;
    set.remove(12);
    set.remove(10);
    set.remove(88);

    cout << set.getSize() << endl;

}

