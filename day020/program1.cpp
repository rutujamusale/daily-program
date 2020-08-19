//Given the participant's score sheet for your University Sports Day, you
//are requierd to find the runner-up score. You are given n scores. Find the score of the runner-up.
#include <iostream>
using namespace std;

int main()
{
    int i,j,n,temp,A[30];
    cout<<"Enter the no of participant's: ";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"\nEnter number"<<i+1<<":";
        cin>>A[i];
    }
    for(i=0;i<n-1;i++)
    {
       int flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(A[j]>A[j+1])
            {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
                flag=1;
            }
        }
        if (flag==0)
        {
            break;
        }
    }
    cout<<"After the participant's score sheet: ";
    for(i=0;i<n;i++)
    {
        cout<<" "<<A[i];

    }
    cout<<"\nThe runner-up score is: "<<A[n-2];
    return 0;

}
