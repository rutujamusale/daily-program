//Write a program that prompts the user to enter two integer values.
//Store these values in int variables named val1 and val2. Write your program to
//determine the smallest, largest, sum, difference, product and the ratio of
//these values and repost them to the user.
// Modify the program above to ask the user to enter floating-point values
// and store them in double variables. Compare the outputs of the two programs for
// some inputs of your choice.
#include<iostream>
using namespace std;
void Number(double val1,double val2)
{
    if(val1>val2)
       {
           cout<<val1<<" largest."<<endl;
            cout<<val2<<" smallest."<<endl;
       }
    else if(val2>val1)
        {
            cout<<val1<<" smallest."<<endl;
            cout<<val2<<" largest."<<endl;
        }
    else
        {
            cout<<"Both are equal.";
        }
    cout<<endl;
}
int main()
{
    double val1,val2,result;
    cout<<"Enter the two numbers: "<<"\n";
    cin>>val1>>val2;
    Number(val1,val2);
    result=val1+val2;
    cout<<"\nsum = "<<result;
    result=val1-val2;
    cout<<"\nDifference = "<<result;
    result=val1*val2;
    cout<<"\nProduct = "<<result;
    result=val1/val2;
    cout<<"\nRatio of these = "<<result;
    return 0;

}
