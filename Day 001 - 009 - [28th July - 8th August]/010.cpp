// [7:03 PM, 8/1/2020] Rutuja:
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>=100&&num<=1000)
    {
        cout<<"The number "<< num <<" is in between 100-1000 "<<endl;
    }
    else
    {
        cout<<"The number "<<num <<" is not in between 100-1000"<<endl;
    }
    return 0;
}
