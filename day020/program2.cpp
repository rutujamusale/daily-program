// Write a program to print the following output:
//123..............n {limit the n for constraint: 1 <= n <= 150, take the input from user
//for the value of n}
//Note: that "........." represents the consecutive values in between.
#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the integers: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<i;
    }
    return 0;
}
