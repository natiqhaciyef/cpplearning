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
#include "oop/polymorphism/Dog.h"
#include "oop/polymorphism/Cat.h"
#include "oop/polymorphism/Animal.h"

using namespace std;
// tree frog

int main() {
    Animal animal = Animal();
    animal.getAnimalSound("Animal");

    Cat cat = Cat();
    cat.getAnimalSound("Cat");

    Dog dog = Dog();
    dog.getAnimalSound("Dog");


    return 0;
}

