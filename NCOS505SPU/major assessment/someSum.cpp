//
// Created by Admin on 2024/05/19.
#include <iostream>
#include <cmath>
using namespace std;

double H(int n, double p)
{
    double sum1=0,sum2=0;
    for(int i=0; i < n; i++){
        sum1 += 3*p*pow(i,2) + 2*p*i;
        sum2 += p* pow(i,3) + i;
    }
    return sum1/sum2;
}

int main()
{
    int n;
    double p;
    cout << "Enter n and p"<<endl;
    cin>>n>>p;

    cout<<"H = "<< H(n,p)<<endl;
}
