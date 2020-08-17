// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 1. Write a program to find maximum number between two numbers.

//Write a program to find maximum number between two numbers.
#include <iostream>
using namespace std;
void maximum(int num1,int num2)
{
    if(num1>num2)
    {
        cout<< num1 <<" is maximum number.";
    }
    else
    {
        cout<< num2 <<" is maximum number.";
    }
}
void minimum(int num1,int num2)
{
    if(num1>num2)
    {
        cout<< num2 <<" is minimum number.";
    }
    else
    {
        cout<< num1 <<" is minimum number.";
    }
}
int main()
{
    int num1,num2;
    cout<<"Enter the number 1 is: ";
    cin>>num1;
    cout<<"Enter the number 2 is: ";
    cin>>num2;
    cout<<endl;
    maximum(num1,num2);
    minimum(num1,num2);

    return 0;
}
