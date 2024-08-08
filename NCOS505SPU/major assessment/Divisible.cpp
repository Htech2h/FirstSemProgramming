//
// Created by Admin on 2024/05/22.
#include <iostream>
#include <cmath>
#include <sstream>
using namespace std;

string Divisible(int n, string nums)
{
    std::istringstream iss(nums);
    std::string firstnum;
    iss >> firstnum;

    int len = nums.length();
    for(int i=0; i<len; i+=2 ){
        int h = stoi(firstnum);
        if(n % h !=0)
            return "Not divisible by all";

    }
    return "Divisible by all";
}

int main()
{
    int n;
    string nums ;
    cin>>n>>nums;
    cout<< Divisible( n ,nums);

}
