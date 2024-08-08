//
// Created by Admin on 2024/05/07.
#include <iostream>
#include <cmath>
using  namespace  std;

int main() {
    int a,b,c;
    cin>>a>>b>>c;

    double P = a+b+c;
    double s = P/2.0;
    double A = sqrt(s*(s-a)*(s-b)*(s-c));

    cout << "perimeter "<<P<<endl;
    cout<< "Area "<< A;
}
