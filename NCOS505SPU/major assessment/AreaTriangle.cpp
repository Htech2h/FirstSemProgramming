//
// Created by Admin on 2024/05/18.
#include <iostream>
#include <cmath>
using namespace std;

double Area_ofTriangle(double a, double b, double c)
{
    double s = (a+b+c)/2.0;
    double Area = sqrt(s*(s-a)*(s-b)*(s-c));

    return Area;
}

int main()
{
    double a,b,c;
    cout<< "enter the sides"<<endl;
    cin>>a>>b>>c;
    if(a+b > c && a+c>b && b+c>a){
        cout<< "Area :"<<Area_ofTriangle(a,b,c);
    }else{
        cout<<"THe sides dont make a triangle";
    }
}
