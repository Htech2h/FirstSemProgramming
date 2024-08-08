//
// Created by Admin on 2024/05/23.
#include<iostream>
using namespace std;
int age[5];
void capture() {

    cout << "enter ur age " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> age[i];
    }
}

int maxAge() {
        int max = age[0];
        for (int i = 1; i < 5; i++) {
            if (age[i] > max) {
                max = age[i];
            }
        }
        return max;
    }

int minAge()
{
    int min = age[0];
    for(int i=1; i< 5; i++){
        if(min > age[i]){
            min = age[i];
        }
    }
    return min;
}



int main ()
{
        capture();
        cout<<"max age :"<<maxAge()<<endl;
        cout<<"min age :"<<minAge()<<endl;
}

