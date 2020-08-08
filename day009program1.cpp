// 1. create a pattern like this using for loop:
// Sample output:
// rows = 4
//
// # # # #
// # # # #
// # # # #
// # # # #
//
// Hint:
// 1. take input how many rows user want!
// 2. use for loop to print the given pattern.
#include <iostream>
using namespace std;


int main()
{
    int rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    
    for(int i=1;i<=rows;++i)
    {
        for(int j=1;j<=rows;++j)
        {
            cout<<" # ";
        }
        cout<<"\n";
    }
    return 0;
}
