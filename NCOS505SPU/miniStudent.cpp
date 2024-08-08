//
// Created by Admin on 2024/06/02.
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

struct Student{
    string name;
    string module;
    int CW;
    int EM;
    int FM;
};
int n = 3;
Student stud[3];

void capture(){
    cout<<"enter details"<<endl;
    for(int i=0; i < n; i++){
        cin>>stud[i].name>>stud[i].module>>stud[i].CW>>stud[i].EM;
        stud[i].FM = round( 0.5*stud[i].CW + 0.5*stud[i].EM);
    }
}

void Dist()
{
    int sum = 0;
    for(int i=0; i<n; i++){
        if(stud[i].FM >= 75)
            sum++;
    }
    cout<<sum<<" got 75% and above"<<endl;
}

int main()
{
    system("cls");
    capture();
    //system("cls");
    Dist();
}
