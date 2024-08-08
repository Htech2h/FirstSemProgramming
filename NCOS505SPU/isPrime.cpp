//
// Created by Admin on 2024/05/10.
#include <iostream>
using namespace  std;

void isPrime(){
    int i = 2;
    int k=1;

    while(k <= 50){
        bool yes = false;
       for(int j = 2; j <= i/2; j++ ){
           if(i%j == 0){
               yes = true;
           }

       }
       if(!yes){
            cout << i<<endl;
            k++;
       }
       i++;

    }
}

int main()
{

    isPrime();
}
