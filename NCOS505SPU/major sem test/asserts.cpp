//
// Created by Admin on 2024/06/02.
#include <iostream>
#include <string>
using namespace std;

struct Asserts{
    string name;
    int number;
    double value;
};
Asserts asset[10];

void Input()
{
    cout<<"Enter Asserts details(name,number,value)"<<endl;
    for(int i=0; i<10; i++){
        cin>>asset[i].name>>asset[i].number>>asset[i].value;
    }
}

double assertsValue()
{
      double res=0;
      for(int i=0; i<10 ; i++){
          res += asset[i].value;
      }
      return res;
}

void CheapAsserts()
{
    int index = 0;
    for(int i=1; i<10; i++){
        if(asset[i].value < asset[index].value){
            index = i;
        }
    }
    string name = asset[index].name;
    cout<<"cheapest asset"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Number: "<<asset[index].number<<endl;
}

void FixedAsserts()
{
    cout<<"Fixed asserts"<<endl;
    cout<<"Name ||number ||value"<<endl;
    for(int i=0; i<10; i++){
        if(asset[i].value >=1000000)
            cout <<asset[i].name<<" "<<asset[i].number<<" "<<asset[i].value<<endl;
    }
}

int main()
{
    Input();
    cout<< assertsValue()<<endl;
    CheapAsserts();
    FixedAsserts();
}
