// Day 011 - 10th August 2020
//===============================================================================
// 1. A company decided to give bonus of 5% to employee if his/her year of service is more than 5 years.
//    Ask user for their salary and year of service and print the net bonus amount.
//===============================================================================

#include <iostream>
using namespace std;

int main()
{
    int bonus,year_of_service,salary;

    cout<<"Enter your salary: ";
    cin>>salary;
    cout<<"Enter year of service: ";
    cin>>year_of_service;
    bonus =salary*0.05;
    salary = salary + bonus;
    if(year_of_service > 5.0)
    {
        cout<<"You got a bonus of RS."<<bonus<<endl;
        cout<<"your finaly salary: RS."<<salary<<endl;

    }
    else
    {
        cout<<"you are not eligible for bonus."<<endl;
    }
    return 0;
}
