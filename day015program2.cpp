// Write a program that accepts three numbers from the user and prints "increasing" if the numbers are in increasing order,
 //"decreasing" if the numbers are in decreasing order, and "Neither increasing or decreasing order"
 // otherwise.
 #include <iostream>
 using namespace std;

 void Number(int a,int b,int c)
 {
     if(a<b && b<c)
        cout<<"The numbers are increasing order.";
     else if(a> b&& b>c)
        cout<<"The number are decreasing order.";
     else
        cout<<"Neither increasing or decreasing order.";
 }
 int main()
 {
     int a,b,c;
     cout<<"Enter the number a,b,c:"<<"\n";
     cin>>a>>b>>c;
     Number(a,b,c);
     return 0;
 }
