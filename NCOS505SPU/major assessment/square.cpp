//
// Created by Admin on 2024/05/18.
#include <iostream>
using namespace std;

void squareProperties(double l){

    double Area = l*l;
    double Parameter = 4*l;
    cout<<"Area :"<<Area<<endl<<"Parameter :"<<Parameter<<endl;
}

int main(){
    //length of square
    double l;
    cin>>l;
    squareProperties(l);
}
