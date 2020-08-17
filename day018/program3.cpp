//Write a program that takes an operation and two numbers and outputs the result accordingly.
//Do this for all operations: addition , subtraction, multiplication, division
#include<iostream>
using namespace std;

int main()
{
    int a,b;
    char operation;
    cout<<"Enter the number : ";
    cin>>a>>b;
    cout<<"\nEnter the operations: ";
    cin>>operation;
    if (operation=='+')
    {
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
    else if(operation=='-')
    {
        cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    }
    else if(operation=='*')
    {
        cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    }
    else if(operation=='/')
    {
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    }
    return 0;

}
