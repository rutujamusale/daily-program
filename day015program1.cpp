//Write a program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include <iostream>
using namespace std;

void Side(int a,int b,int c)
{
    if(a==b&&b==c&&c==a)
        cout<<"The triangle is Equilateral"<<endl;
    else if(a==b||b==c||c==a)
        cout<<"The triangle is Isosceles"<<endl;
    else
        cout<<"The triangle is Scalene"<<endl;

}
int main()
{
    int a,b,c;
    cout<<"Enter the value of a,b,c"<<"\n";
    cin>>a>>b>>c;
    Side(a,b,c);
    return 0;
}
