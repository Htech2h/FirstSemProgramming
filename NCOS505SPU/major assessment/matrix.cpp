//
// Created by Admin on 2024/05/19.
#include <iostream>
using namespace  std;

int matrix0[3][3], matrix1[3][3], matrix2[3][3];

void input(int matrix[3][3]){
    cout<<"Enter items"<<endl;
    for(int j = 0; j<3; j++){
        for(int i=0; i<3; i++){
            cin>>matrix[j][i];
        }
    }
}

void matrixSum(){
    for(int j = 0; j<3; j++){
        for(int i=0; i<3; i++){
            matrix0[j][i] = matrix1[j][i] + matrix2[j][i];
        }
    }
}

void printMatrix(){
    int sumOfItems=0;
    for(int j = 0; j<3; j++){
        for(int i=0; i<3; i++){
            cout<<" "<< matrix0[j][i];
            sumOfItems += matrix0[j][i];
        }
        cout<<endl;
    }

    cout<<"Sum Of Items :"<<sumOfItems<<endl;
}

int main()
{
    input(matrix1);
    input(matrix2);
    matrixSum();
    printMatrix();
}
