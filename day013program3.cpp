//  Write a program to check whether a number is negative, positive or zero.
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number is: ";
    cin>>num;

    cout<<endl;
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
    return 0;
}
