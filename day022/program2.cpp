//Write a program that asks the user for a number n and gives them the possibility to choose between
//computing the sum and computing the product of 1,…,n.
#include<iostream>
using namespace std;

int main()
{
    int i,n,sum=0,prod=1;
    int operation;
    cout<<"Enter the numbres: ";
    cin>>n;
    cout<<"\nWhich operation you want to perform: ";
    cout<<"1.sum\n2.product";
    cin>>operation;
    if(operation==1)
    {
        for(i=1;i<=n;i++)
        {
            sum=sum+i;
        }
        cout<<"\nsum= "<<sum;
    }
    else if(operation==2)
    {
        for(i=1;i<=n;i++)
        {
            prod=prod*i;
        }
        cout<<"\nproduct= "<<prod;
    }
        return 0;
}
