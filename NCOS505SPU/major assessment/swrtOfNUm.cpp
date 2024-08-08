//
// Created by Admin on 2024/05/22.
#include <iostream>
using namespace std;

int n;

double squareroot()
{
    double r = n/2.0;

    for(int i=0; i<10; i++){
        double prev = r;
        r = (r + n / r) / 2.0;

        // Check for convergence
        if (std::abs(r - prev) < 0.00001) {
            break;
        }
    }

    return r;
}

int main()
{
    cout<<"enter n"<<endl;
    cin>>n;
    cout<< squareroot();


}
