//Write a program to angles of a triangle and check whether triangle is valid or not.
//Hint: Sum of Angles of triangle = 180;
#include<iostream>
using namespace std;

void Addition(int angle1,int angle2,int angle3)
{
    if(angle1+angle2+angle3==180 )
    {
        cout<<"Triangle is valid."<<endl;
    }
    else
    {
        cout<<"Triangle is not valid."<<endl;
    }
}
int main()
{
    int angle1,angle2,angle3;
    cout<<"Enter the first angle of triangle is: ";
    cin>>angle1;
    cout<<"\nEnter the second angle of triangle is: ";
    cin>>angle2;
    cout<<"\nEnter the third angle of triangle is: ";
    cin>>angle3;
    cout<<endl;
    Addition(angle1,angle2,angle3);
    return 0;
}
