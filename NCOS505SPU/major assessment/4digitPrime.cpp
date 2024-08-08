//
// Created by Admin on 2024/06/02.
#include <iostream>

using  namespace  std;

bool IsPrime(int n)
{
    for(int i = 2; i<=(int)(n/2); i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    for(int i= 1000; i<10000; i++)
    {
        if(IsPrime(i))
            cout<< i<<"  Is prime"<<endl;
    }
}
