//Write a program using function to check if the number is prime or not.
#include<iostream>
using namespace std;

int main()
{
    int i,n;
    cout<<"Enter the number greater than 1: ";
    cin>>n;
    for(i=2;i<=n;i++)
    {
        if(n==2)
        {
            cout<<n<<" is prime no.";
            break;
        }
        else if(n%i!=0)
        {
            cout<<n<<" is prime no. ";
            break;
        }
        else
        {
            cout<<n<<" is Not prime no. ";
            break;
        }
    }
    return 0;
}
