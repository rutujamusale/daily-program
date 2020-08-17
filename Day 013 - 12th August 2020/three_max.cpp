
// Day 013 - 12th August 2020
// ==========================================
//
//
// (Note: solve every question using function)
//
// 2. Write a program to find maximum between three numbers.

//Write a program to find maximum number between two numbers.
#include <iostream>
using namespace std;
void maximum(int num1,int num2,int num3)
{
    if(num1>num2&&num1>num3)
    {
        cout<< num1 <<" is maximum number.";
    }
    else if(num2>num1&&num2>num3)
    {
        cout<< num2 <<" is maximum number.";
    }
    else
    {
        cout<< num3 <<" is maximum number.";
    }
}
void minimum(int num1,int num2,int num3)
{
        if(num1<num2&&num1<num3)
    {
        cout<< num1 <<" is minimum number.";
    }
    else if(num2<num1&&num2<num3)
    {
        cout<< num2 <<" is minimum number.";
    }
    else
    {
        cout<< num3 <<" is minimum number.";
    }
}
int main()
{
    int num1,num2,num3;
    cout<<"Enter the number 1 is: ";
    cin>>num1;
    cout<<"\nEnter the number 2 is: ";
    cin>>num2;
    cout<<"\nEnter the number 3 is: ";
    cin>>num3;
    cout<<endl;
    maximum(num1,num2,num3);
    minimum(num1,num2,num3);

    return 0;
}
