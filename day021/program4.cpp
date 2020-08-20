//Write a program to print all even number in between 1 to 100 and all odd numbers between 100 - 200 using loop.
#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"All even number in between 1 to 100:";

    for(x=1;x<=100;x++)
    {
        if(x%2==0)
        {
            cout<<x<<" ";
        }
    }
    cout<<"\nAll odd numbers in between 100 to 200:";

    for(x=100;x<=200;x++)
    {
        if(x%2!=0)
        {
            cout<<x<<" ";
        }
    }
    return 0;
}
