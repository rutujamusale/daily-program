// [6:52 PM, 8/1/2020] Rutuja:
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    if(num>17)
    {
        cout<<"ans = "<<(num-17)*2<<endl;
    }
    else
    {
        cout<<"ans = "<<(17-num)<<endl;
    }
    return 0;
}
