//
// Created by Admin on 2024/05/22.
#include <iostream>
using  namespace std;

void maxProduct(int arr[],int n)
{

    int product = 0;
    int index;
    for(int i =0;i<n; i++){
        if(arr[i]*arr[i+1] > product){
            product = arr[i]*arr[i+1];
            index = i;
        }
    }
    cout<<product <<"("<<arr[index]<<"x"<<arr[index+1]<<")"<<endl;

}

int main()
{
    int input[] = {-10, -3, 5, 2,55,55};
    int n = sizeof(input)/sizeof(input[0]);
    maxProduct(input,n);

}

