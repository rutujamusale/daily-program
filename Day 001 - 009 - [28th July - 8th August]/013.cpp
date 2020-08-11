
// [8:04 PM, 8/2/2020] Rutuja:
#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s = "Hello world!\n";

    int n = 6;

    string s1 = s;
    for (int i=1; i<n;i++)
    {
    s += s1;

    }
    cout<<s<<endl;


    return 0;
}
