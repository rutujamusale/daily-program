//Write a program to find maximum number between two numbers.
#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"Enter the number 1 is: ";
    cin>>num1;
    cout<<"Enter the number 2 is: ";
    cin>>num2;
    cout<<endl;
    if(num1>num2)
    {
        cout<< num1 <<" is maximum number.";
    }
    else
    {
        cout<< num2 <<" is maximum number.";
    }
    return 0;
}
