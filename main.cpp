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
#include "advanced/customed/Queue.h"
#include "advanced/customed/Set.h"
#include "creativeness/PhpInsertFileCreator.h"
#include "advanced/customed/Stack.h"

using namespace std;
// tree frog

int main() {
    Stack stack = Stack();
    stack.add(12);
    stack.add(10);
    stack.add(17);
    stack.add(14);
    stack.add(19);
    stack.add(21);
    stack.add(6);
    stack.add(9);
    stack.add(11);
    stack.add(13);
    stack.add(5);
    stack.printStack();

    stack.remove();
    stack.printStack();

    stack.remove();
    stack.printStack();

}

