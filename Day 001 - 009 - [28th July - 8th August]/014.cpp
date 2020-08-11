// [8:34 PM, 8/2/2020] Rutuja:
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"enter no 1 : ";
    cin>>num1;
    cout<<"\nenter no 2 : ";
    cin>>num2;

    cout<<"\nenter no 3 : ";
    cin>>num3;

    if(num1==num2&&num2==num3)
    {
        cout<<(num1+num2+num3)*3<<endl;
    }
    else
    {
        cout<<num1+num2+num3;
    }
    return 0;
}
