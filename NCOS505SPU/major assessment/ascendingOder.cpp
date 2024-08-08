//
// Created by Admin on 2024/05/19.
#include <iostream>
using namespace  std;

int main(){
    int a,b,c;
    cout <<"enter 3 numbers"<<endl;
    cin>>a>>b>>c;

    //swap a and b into correct positions
    if(b<a){
        int ptr = a;
        a = b;
        b = ptr;
    }
    //now we just have to put c into correct position
    if(c < a && c < b)
        cout<<c<<a<<b<<endl;
    else if (c > a && c<b)
        cout << a<<c<<b<<endl;
    else
        cout << a<<b<<c<<endl;

    return 0;
}
