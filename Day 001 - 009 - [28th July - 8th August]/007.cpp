#include <iostream>
using namespace std;

int main()
{
    int total;
    cout<<"Enter total marks: ";
    cin>>total;
    if(total>90&&total<=100)
    cout<<"A";
    else if(total>=75&&total<90)
    cout<<"B";
    else if(total>=65&&total<75)
    cout<<"C";
    else
    cout<<"Fail! ";
    return 0;
}
