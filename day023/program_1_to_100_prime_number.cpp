//Write a program to print prime numbers between 1 to 100.
#include<iostream>
using namespace std;

int main()
{
    int i,n,flag;
    cout<<"prime numbers: ";
    for(n=1;n<=100;n++)
    {
        flag =1;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1 && n!=1)
        {
            cout<<n<<" ";
        }
    }
    return 0;

}
