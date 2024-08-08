//
// Created by Admin on 2024/05/18.
#include <iostream>
#include <cmath>
using namespace std;

double oscillationPeriod(double l, double g)
{
    return 2* M_PI* sqrt(l/g);
}

int main()
{
    double l,g;
    cout<< "enter length and planet gravity(9.81 on earth)"<<endl;
    cin>>l>>g;
    cout<<oscillationPeriod(l,g);
}
