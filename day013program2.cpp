// Write a program to find maximum between three numbers.
#include <iostream>
using namespace std;

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
    return 0;
}
