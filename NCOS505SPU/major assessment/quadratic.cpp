//
// Created by Admin on 2024/05/19.
#include <iostream>
#include <cmath>
using namespace  std;

int main(){

    double a,b,c;
    cout << "Enter coefficients a, b, and c: "<<endl;
    cin>>a>>b>>c;
    double delta = pow(b,2) - 4*a*c;
    if(delta > 0 ){

        double x1 = -b + sqrt(delta) / (2.0*a);
        double x2 = -b - sqrt(delta) / (2.0*a);
        cout<<"x1 :"<<x1<<endl<<"x2 :"<<x2;

    }
    else if(delta == 0 ){

        double x1 = -b - sqrt(delta) / (2.0*a);
        cout<<"Thres one real repeated root :"<< x1;

    }else{
        cout<< "No real roots!!";
    }
}
