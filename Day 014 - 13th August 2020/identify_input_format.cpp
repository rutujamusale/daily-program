// Day 014 - 13th August 2020
// ================================================
//
// [Note - Solve using Functions]
// Concept - If-Else statements.......
//
// 3. Write a program to input any character and check whether it is alphabet, digit
//  or special character.
// Hint:   "a-z" or "A-Z" is alphabet
// 	"0-9" is digit.
// 	any other input is special character

//Hint:   "a-z" or "A-Z" is alphabet"0-9" is digit.
//any other input is special character

#include <iostream>
using namespace std;

void charactercheck(char x)
{
    if ((x>='a' && x<='z')||(x>='A' && x<='z'))
    {
        cout<<x<<" is an Alphabet.";
    }
    else if(x>='0' && x<='9')
    {
        cout<<x<<" is a digit.";
    }
    else
    {
        cout<<x<<" is a special character";
    }
}
int main()
{
    char x;
    cout<<"Enter any character";
    cin>>x;
    charactercheck(x);
    return 0;
}
