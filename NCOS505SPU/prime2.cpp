//
// Created by Admin on 2024/05/23.
#include <iostream>
using namespace std;

bool prime2(int n)
{
    for(int i=2; i <= (n/2); i++){
        if(n % i ==0)
            return false;
    }
    return true;
}

int main()
{
    for(int n=2; n< 10000;n++){
        if(prime2(n))
            cout<<n<<" Is prime"<<endl;
    }
}
