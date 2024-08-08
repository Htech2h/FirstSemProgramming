//
// Created by Admin on 2024/05/19.
#include <iostream>
#include <cmath>
using namespace std;

unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        unsigned long long result = 1;
        for (int i = 2; i <= n; ++i) {
            result *= i;
        }
        return result;
    }
}

double e(int x , int n)
{
    double E =0;
    for(long i = 0; i < n; i++){
        E += pow(x,i) / factorial(i);
    }

    return E;
}

int main(){
    int x,n;
    cout << "Enter x  and n"<<endl;
    cin>>x>>n;

    cout << e(x,n)<<endl;
}
