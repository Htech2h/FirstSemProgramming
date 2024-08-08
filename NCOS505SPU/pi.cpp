//
// Created by Admin on 2024/05/23.
#include <iostream>
using namespace std;

double pi()
{
    double pie = 0;
    int j=0;
    for(int i=1; i<100000000; i+=2){
        if(j==0){
            pie += 4.0/i;
            j++;
        }else{
            pie -= 4.0/i;
            j--;
        }
    }
    return pie;
}

int main()
{
    cout<<"pi :"<<pi();
}