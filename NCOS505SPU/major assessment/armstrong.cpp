
// Created by Admin on 2024/05/19.
#include <iostream>
#include <cmath>
using namespace std;

bool ArmstrongNum(int n)
{
    int original = n;
    int sum = 0;
    while(n > 0){
        int digit = n %10;
        sum += pow(digit,3);
        n /= 10;

    }
    return original == sum;
}

int main()
{
    for(int i = 0; i < 10000; i++){
        if(ArmstrongNum(i))
            cout<< i << " is armstrong"<<endl;
    }
}
