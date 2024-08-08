//
// Created by Admin on 2024/05/07.
#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;

    if(a+b>c && b+c>a && a+c>b){
        if(a==b && a==c)
            cout<<"equilateral"<<endl;
        else if(a==b || a==c || c==b)
            cout<<"isoceles"<<endl;
        else
            cout<<"scalene"<<endl;

        double P = a+b+c;
        double S = P/2.0;
        double A = sqrt(S*(S-a)*(S-b)*(S-c));
        cout<<"Area "<<A;
    }else{
        cout<< "Is Not A Valid Triangle"<<endl;
    }
}
