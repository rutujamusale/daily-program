
// [6:12 PM, 8/2/2020] Rutuja:
#include<iostream>
#include<string>
using namespace std;

string repeat(string s, int n)
{
    string s1 = s;
    for (int i=1; i<n;i++)
    s += s1;
    return s;
}
int main()
{
    string s = "Hello world!\n";

    int n = 3;
    cout << repeat(s, n) << endl;;

    return 0;
}
