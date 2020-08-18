 //Write a program to find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n)
 #include<iostream>
 using namespace std;

 int main()
 {
     int i,n ,sum=0;
     cout<<"Enter the value of n: ";
     cin>>n;
     for(i=1;i<=n;i++)
     {
         cout<<(i*i)<<" ";
         sum=sum+(i*i);
     }
     cout<<"\nSum = "<<sum;
     return 0;
 }
