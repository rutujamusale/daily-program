//Print multiplication table of 24, 50, 29, 2, 9 and 19 using loop.
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the for multiplication table: ";
    cin>>n;
    for(int i=1;i<=10;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
