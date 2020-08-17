// Day 010 - 9th August 2020
// =======================================================================
// 3) A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.
// =========================================================================

#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double no_of_class,no_of_atten;
    double percent_atten;
    cout<<"Enter number of class held: ";
    cin>>no_of_class;
    cout<<"Enter number of class attended: ";
    cin>>no_of_atten;

    percent_atten = (no_of_atten/no_of_class)*100.0;

    cout<<"Percentage attendance is "<<percent_atten<<endl;

    if(percent_atten>=75.0)
    {
        cout<<" You are allowed to sit in exam\n";
    }
    else
    {
        cout<<" sorry,you are not allowed to sit in exam\n";
    }
    return 0;
}
