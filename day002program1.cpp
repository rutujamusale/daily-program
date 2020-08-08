// Multiplication
// 2. Write a program that takes a number as input and prints its multiplication table upto 10.
// Test Data:
// Input a number: 8
// Expected Output :
// 8 x 1 = 8
// 8 x 2 = 16
// 8 x 3 = 24
// ...
// 8 x 10 = 80


#include <iostream>
using namespace std;

int main()
{
    int n = 8;
    for(int i = 1; i <= 10; ++i)
    cout<< n <<" * "<< i <<" = "<< n * i <<endl;
    return 0;
}
