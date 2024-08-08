//
// Created by Admin on 2024/05/23.
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> mymap;
    mymap[1] = 5;
    mymap[3] = 8;
    for(const auto &pair: mymap){
        cout<<pair.second;
    }
}
