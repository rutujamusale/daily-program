// Swaping two variable

#include <iostream>
using namespace std;
int main()
{
    int num1,num2,temp;
    cout<<"Enter Number1"<<endlj;
    cin>>num1;
    cout<<"Enter Number2"<<endl;
    cin>>num2;
    cout<<"Before swapping num1="<<num1<<"num2="<<num2<<endl;
    temp=num1;
    num1=num2;
    num2=temp;
    cout<<"After swapping num1="<< num1<<"num2="<<num2<<endl;
    return 0;
}
