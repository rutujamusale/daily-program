// Write a program to check whether a character is uppercase or lowercase.
#include <iostream>
using namespace std;

void charcheck(char x)
{
    if(x>='A' && x<='Z')
    {
        cout<<x<<" is uppercase.";
    }
    else if(x>='a' && x<='z')
    {
        cout<<x<<" is lowercase.";
    }
    else
    {
        cout<<x<<" it is not alphabet.";
    }
}
int main()
{
    char x;
    cout<<"Enter the character is: ";
    cin>>x;
    charcheck(x);
    return 0;
}
