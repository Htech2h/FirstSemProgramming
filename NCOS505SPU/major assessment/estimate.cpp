//
// Created by Admin on 2024/06/02.x
#include <iostream>
#include <cmath>
using namespace std;

double x;

int fac(int n)
{
    if(n == 0 || n ==1)
        return 1;

    int results = 1;
    for(int i = 2; i<=n; i++){
        results *= i;
    }
    return results;
}

double est()
{
    double e=1, sum1, i=0;
    do{
        i++;
        sum1 = e;
        e += pow(x,i) / fac(i);

    }while(abs(e-sum1)> 0.0000001);
    return e;
}

int main()
{
    cout<<"x"<<endl;
    cin>>x;
    cout<< est();
}
