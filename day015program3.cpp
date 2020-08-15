//Write a program that accepts two floating­point numbers and checks whether they are the same up to two decimal places.
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
    return 0;
}
