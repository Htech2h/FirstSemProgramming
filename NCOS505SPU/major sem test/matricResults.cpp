//
// Created by Admin on 2024/06/02.
#include <iostream>
//#include <string>
using  namespace  std;
int mark;
void range()
{
    switch (mark)
    {
        case 1:
            cout<<"0-20%";
            break;
        case 2:
            cout<<"21-30";
            break;
        case 3:
            cout<<"31-49";
            break;
        case 4:
            cout<<"50-60";
            break;
        case 5:
            cout<<"61-69";
            break;
        case 6:
            cout<<"70-79";
            break;
        case 7:
            cout<<"80-100";
            break;
        default:
            cout<<"invalid category";
    }
}

int main()
{
    cout <<" Enter mark: "<<endl;
    cin>>mark;
    range();
}
