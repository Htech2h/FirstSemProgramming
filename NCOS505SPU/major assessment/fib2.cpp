//
// Created by Admin on 2024/06/03.
#include <iostream>
using namespace std;
int n;
void fib2()
{
    int a=1, b=1, c;
    cout<<a<<endl<<b<<endl;
    for(int i =3; i<=n; i++){
        c = a+b;
        cout<< c<<endl;
        a = b;
        b = c;
    }
}

int fibRec()
{

}

int main()
{
    cout<<"enter n"<<endl;
    cin>>n;
    fib2();
}
