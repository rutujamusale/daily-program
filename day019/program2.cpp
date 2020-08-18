//Modify the above program to find the sum of first n natural numbers using for loops.
//Sample output:
//Enter the value of n: 10
//The first 10 natural numbers are:
//1 2 3 4 5 6 7 8 9 10
//The sum of first 10 natural numbers: 55
#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Enter the integers: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum+=i;
        cout<<i<<" ";
    }

    cout<<"\nSum = "<<sum;
    return 0;
}
