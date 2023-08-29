#include "iostream"
#include "list"


using namespace std;

#ifndef CPPLEARNING_COLLECTIONS_H
#define CPPLEARNING_COLLECTIONS_H

class CollectionTest {
public:
    void arrayListTest() {
        list<int> testList = {9, 8, 3, 5, 4};
        testList.push_back(12);
        testList.push_back(25);
        testList.remove(3);

        cout << testList.size() << endl;
        auto it = testList.begin();
        cout << "[ ";
        for (int i = 0; i < testList.size(); i++) {
            if (i == 0)
                cout << *it;
            else
                cout << *it.operator++();

            if (i != testList.size()-1)
                cout << ", ";
            else
                cout << " ]";
        }
    }

};

#endif //CPPLEARNING_COLLECTIONS_H
