#include <iostream>

using namespace std;

#ifndef CPPLEARNING_STRINGFUNCTIONS_H
#define CPPLEARNING_STRINGFUNCTIONS_H

void stringFunctionsUsage() {
    string s1 = "C++, Kotlin, Java and Swift";
    string s2 = " are great";

    // connecting or bind with strings
//    cout << s1.append(s2) << endl;

    // s1 changing to s2
//    cout << s1.assign(s2) << endl;

    // last char at s1
//    cout << s1.back() << endl ;

    // first char's pointer address (*it)
//    cout << *s1.begin() << endl;

    // char from selected index
//    cout << s1.at(2) << endl ;

    // converts string to array
//    cout << s1.c_str() << endl ;

    // string's memory size
//    cout << s2.capacity() << endl ;

    // string's char size
//    cout << s2.length() << endl ;

    // first char's pointer address
//    cout << *s1.cbegin() << endl ;

    // last char's pointer address
//    cout << *s1.cend() << endl ;

    // comparing strings' values
//    cout << s1.compare("l") << endl ;

    // convert reverse first char's pointer address
//    cout << *s1.crbegin() << endl ;

    // convert reverse last char's pointer address
//    cout << *s1.crend() << endl ;

    // replace position with new string
//    cout << s1.replace(10,12, "ithzerland") << endl ;

    // clear string and remove chars
//    s1.clear();

    // gets index of selected char
//    cout << s1.find("w") << endl;

}


#endif //CPPLEARNING_STRINGFUNCTIONS_H
