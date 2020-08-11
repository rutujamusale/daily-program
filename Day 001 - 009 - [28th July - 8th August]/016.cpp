// [4:00 PM, 8/8/2020] Rutuja:
#include <iostream>
using namespace std;


int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;

    for(int i=rows;i>=1;--i)
    {
        for(int j=1;j<=i;++j)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    return 0;
}
