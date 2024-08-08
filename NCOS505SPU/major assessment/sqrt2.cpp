//
// Created by Admin on 2024/06/02.
#include <iostream>
#include <cmath>

using namespace std;
int n;

double sqrt()
{
    double r = n/2.0, prev;
    do{

        prev = r;
        r = (r + n/r)/2.0;

    }while(abs(r-prev) > 0.000001);
    return r;
}

int main()
{
    cout<<"Enter number"<<endl;
    cin>>n;
    cout<< sqrt();
}
