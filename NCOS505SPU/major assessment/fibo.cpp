//
// Created by Admin on 2024/05/19.
#include <iostream>
using namespace std;

int n;
/*void Inputs ()
{
    cout<<"How many Fibo numbers do you want  :";
    cin>>n;
} */

void fibo ()
{
    int a=1, b=1,c,i;
    cout<<a<<endl;
    cout<<b<<endl;
    for (i=3;i<=n;i++)
    {
        c=a+b;
        cout<<c<<endl;
        a=b;
        b=c;
    }
}

int main ()
{
    //Inputs();
    cin>>n;
    fibo();
    return 0;
}
