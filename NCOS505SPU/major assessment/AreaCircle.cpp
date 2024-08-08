//
// Created by Admin on 2024/05/18.
#include <iostream>
#include <cmath>
using namespace  std;

double Area(double d)
{
    double radius = d/2.0;
    return M_PI * (radius*radius);
}

int main()
{
    double d;
    cout<<"enter diameter"<<endl;
    cin>>d;

    cout << Area(d);


}
