//
// Created by Admin on 2024/05/19.
#include <iostream>
#include <map>
#include <cmath>
using namespace  std;

int marks[20];

void input()
{
    cout<< "Enter marks"<<endl;
    for(int i= 0; i < 20; i++){
        cin>>marks[i];
    }
}

double mean(){
    double sum = 0;
    for(int mark : marks){
        sum += mark;
    }
    return sum/20.0;
}

double mode(){
    map<int, int> freq;
    for(int mark:marks){
        if(freq.find(mark) == freq.end()){
            freq[mark] = 1;
        }else{
            freq[mark]++;
        }
    }
    int mode = 0;
    int maxCount = 0;

    for (const auto& pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            mode = pair.first;
        }
    }

    return mode;
}

double median()
{
    for(int i= 0; i<20; i++){
        int index = i;
        for (int j=1+index; j< 20; j++){
            if(marks[j]< marks[index]){
                index = j;
            }
        }
        //swap
        int ptr = marks[i];
        marks[i] = marks[index];
        marks[index] = ptr;
    }
    return (marks[9]+marks[10]) / 2.0;
}

double stdDev(){
    double variance = 0.0;
    for(int mark : marks) {
        variance += pow(abs(mean() - mark), 2);
    }
    variance/20.0;

    return sqrt(variance);
}

int main()
{
    input();
    cout<<"THe mean :"<<mean()<<endl;
    cout<<"The mode :"<<mode()<<endl;
    cout<<"THe median :"<<median()<<endl;
    cout<<"Std dev :"<<stdDev()<<endl;

}
