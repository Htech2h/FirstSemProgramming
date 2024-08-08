//
// Created by Admin on 2024/04/25.
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int L;
    cin>> L;

    double p = pow(2*(22.0/7),sqrt(L/9.81));
    cout<<"oscillation period: "<<p<<endl;
}
