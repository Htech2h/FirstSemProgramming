//
// Created by Admin on 2024/05/19.
#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int age;
    int mark;
};

Student student[20];

void input(){
    cout << "Enter name, age, and mark for student "<<endl;
    for(int i=0; i<20; i++){
        cin>>student[i].name>> student[i].age >> student[i].mark;
    }
}

double avAge()
{
    int sum = 0;
    for(int i=0; i<20; i++){
        sum += student[i].age;
    }
    return sum/20.0;
}

string highestStudent()
{
    int mark = student[0].mark;
    int index = 0;
    for(int i = 1; i<20; i++){
        if(student[i].mark > mark){
            mark =  student[i].mark;
            index = i;
        }
    }
    return student[index].name;
}

double passRate(){
    int sum=0;
    for(int i = 0; i<20; i++){
        if(student[i].mark >= 50)
            sum++;
    }
    return sum / 20.0 * 100;
}

void whoFailed(){
    cout<< "List Of Students Who Failed"<<endl;
    for(int i = 0; i<20; i++){
        if(student[i].mark < 50) {
            cout << (i + 1) << " " << student[i].name << endl;
        }
    }
}

int main()
{
    input();
    cout<<"Age average :"<<avAge()<<endl;
    cout<<"Highest student :"<<highestStudent()<<endl;
    cout<<"Pass rate :"<<passRate()<<"%"<<endl;
    whoFailed();
}
