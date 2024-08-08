//
// Created by Admin on 2024/06/02.
#include <iostream>
#include <cmath>
using namespace std;

double est()
{
    double p1=0,p2, i=-1, j=0;
    do{
        i+=2;
        p2 = p1;
        if(j==0)
        {
            p1 += 4.0 / i;
            j++;
        }
        else
        {
            p1 -= 4.0 / i;
            j--;
        }
    }while(abs(p1-p2) > 0.000001);
    return p1;
}

int main()
{
    cout<<est();
}
