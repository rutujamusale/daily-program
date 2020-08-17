// ==============================================
// Day 010 - 9th August 2020
//
// 1. Write a program to print half pyramid using numbers.
// Sample output:
//
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5
//
// ----------------------------------------

#include <iostream>
using namespace std;

int main()
{
    int rows;

    cout<<"Enter number of rows: ";
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<< j <<" ";
        }
        cout<<"\n";
    }
    return 0;
}
