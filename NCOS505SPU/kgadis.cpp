//
// Created by Admin on 2024/04/30.
//
#include <iostream>
#include <string>
using namespace  std;

int main(){

    int arr2[3][4] = {{70,66,44,77},
                      {17,8,3,4},
                      {137,93,37,73}};
    string myMonth[] = {"jan","feb","mar","apr"};
    string myCar[] = {"ford", "vw","toyota"};
    int i,j, num;
    int h1,h2;
    num = arr2[0][0];
    for(i = 0; i < 3; i++){

        for(j = 0; i < 4; i++){
           if (arr2[i][j] > num){
               num = arr2[i][j];
               h1 = i;
               h2 = j;
           }
        }
    }

    cout<<"Car: "<<myCar[h1]<<" Month: "<<myMonth[h2]<<endl;

}
