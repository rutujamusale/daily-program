//Write a program to find maximum number between two numbers.
#include <iostream>
using namespace std;
void number(int num)
{
    if(num>0)
    {
        cout<< num <<" is positive number.";
    }
    else if(num<0)
    {
        cout<< num <<" is negative number.";
    }
    else
    {
        cout<< num <<" is zero number.";
    }
}

int main()
{
     int num;
    cout<<"Enter the number is: ";
    cin>>num;

    cout<<endl;
    number(num);

    return 0;
}
