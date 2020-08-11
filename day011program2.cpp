2. Calculate the sum of digits of a number given by user. E.g.-
   INPUT : 123        OUTPUT : 1 + 2 + 3 = 6
   INPUT : 12345      OUTPUT : 1 + 2 + 3 + 4 + 5 = 15

Hint = Same logic as Armstrong number wala program!
=========================================================
#include <iostream>

using namespace std;

int main()
{
    int num,a,sum=0;
    cout<<"enter a number ";
    cin>>num;
    
    while(num>0)
    {
        a=num%10;
        sum=sum+a;
        num=num/10;
        
    }
    cout<<"sum of digits of number :"<<sum;
    
    
    return 0;
}
