//Given an integer, n, perform the following conditional actions:
//If n is odd, print Weird
//If n is even and in the inclusive range of 2 to 5, print Not Weird
//If n is even and in the inclusive range of 6 to 20, print Weird
//If n is even and greater than 20, print Not Weird
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the integer N: ";
    cin>>n;
    if(n%2==0)
    {
        if(n>=2 && n<=5)
        {
            cout<<" Not Weird.";
        }
        else if(n>=6 && n<=20)
        {
            cout<<"Weird.";
        }
        else
        {
            cout<<"Not Weird.";
        }
    }
    else
    {
        cout<<"Weird.";
    }
    return 0;
}
