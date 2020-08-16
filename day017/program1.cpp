//Write a program in C++ that converts from miles to kilometers.
//Your program should have a reasonable prompt for the user to enter
//a number of miles.

#include<iostream>
using namespace std;

int main()
{
    double miles,kilometers;
    cout<<"Enter the miles: ";
    cin>>miles;
    kilometers=miles*1.609;
    cout<<kilometers<<" kilometeres.";

    return 0;
}
