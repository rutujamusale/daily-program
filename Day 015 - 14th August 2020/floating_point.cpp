// Day 015 - 14th August 2020
// =========================================================
//
// concept : if elses statements...
//
// 3. Write a program that accepts two floating­point numbers and checks whether they are the same up to two decimal places.
//
// Example:
//
// num1 = 25.585 ----> (25.58 - upto 2 decimals)
// num2 = 25.589 ----> (25.58 - upto 2 decimals)
// Therefore, both numbers are same!



#include<iostream>
using namespace std;

void Number(double num1,double num2)
{
    if(((num1-num2)<0.01)&&(num1>num2))
    {
        cout<<"The numbers are same.";
    }
    else if(((num2-num1)<0.01)&&(num2>num1))
    {
        cout<<"The numbers are same.";
    }
    else
    {
        cout<<"The numbers are different.";
    }
}
int main()
{
    double num1,num2;
    cout<<"Enter the numbers are num1,num2"<<"\n";
    cin>>num1>>num2;
    Number(num1,num2);
}
