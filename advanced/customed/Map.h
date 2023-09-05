#include "iostream"
#include "string"

using namespace std;

#ifndef CPPLEARNING_MAP_H
#define CPPLEARNING_MAP_H
template <typename K, typename V>
class Map{
private:
    static const int size = 100;
    pair<K,V> data[size];

public:
    Map(){
        for (int i = 0; i < size; ++i) {
            data[i] = make_pair(K(), V());
        }
    }

    void insert(const K& key, const V& value){
        int index = hash(key);
        data[index] = make_pair(key, value);
    }

    V get(const K& key){
        int index = hash(key);
        return data[index].second;
    }

private:
    int hash(const K& key){
        return std::hash<K>{}(key) % size;
    }
};

#endif //CPPLEARNING_MAP_H
