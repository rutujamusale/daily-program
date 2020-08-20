//Read the cost and selling price of an object and write a program to find the profit earned by a
//seller (in rupees). The selling price is greater than the cost price.
#include<iostream>
using namespace std;

int main()
{
    double profit,selling_price,cost_price;
    cout<<"Enter the selling price: ";
    cin>>selling_price;
    cout<<"\nEnter the cost price: ";
    cin>>cost_price;
    profit=selling_price - cost_price;
    cout<<"Profit is: "<<selling_price<<"-"<<cost_price<<"="<<profit;
    return 0;
}
