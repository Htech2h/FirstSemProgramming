//
// Created by Admin on 2024/06/02.
#include <iostream>
#include <cmath>
using namespace std;

double p;
double findH()
{
    double H=0, sum1, i=0;
    do{
        i++;
        sum1=H;
        H= (3*p*pow(i,2) + 2*p*i) / (p*pow(i,3)+i);
    }while(abs(H-sum1) > 0.000001);
    return H;
}

int main()
{
    cout<<"Enter p"<<endl;
    cin>>p;
    cout<< findH();
}
