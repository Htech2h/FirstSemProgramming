//
// Created by Admin on 2024/05/18.
#include <iostream>
using namespace  std;

double f(int x)
{
    if(x > 5)
        return x*x;
    else
        return 2*(x) + 1;
}

int main()
{
    int x ;
    cout<<" enter num"<<endl;
    cin>> x;
    cout<< f(x) << endl;
}
