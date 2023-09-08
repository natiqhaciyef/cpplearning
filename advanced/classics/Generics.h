#include "iostream"
#include <cmath>

using namespace std;

#ifndef CPPLEARNING_GENERICS_H
#define CPPLEARNING_GENERICS_H

template <class T>
class TemplateTest
{
private:
    T x;

public:

    TemplateTest(T t){
        x = t;
    };

    // it enables only numeric types can access this function
    template<typename U = T, typename = typename enable_if<is_arithmetic<U>::value>::type>
    double increment(){
        return x + 1;
    }
};
#endif //CPPLEARNING_GENERICS_H
