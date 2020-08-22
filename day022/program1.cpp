//Write a program that asks the user for a number n and prints the sum of the numbers 1 to n
//Modify the previous program such that only multiples of three or five are considered in the sum
 #include<iostream>
 using namespace std;

 int main()
 {
    int i,n,sum=0;
    cout<<"Enter the numbers: ";
    cin>>n;

    for(i=0;i<=n;i++)
    {
        if(i%3==0 || i%5==0)
        {
            sum=sum+i;
        }
    }
    cout<<"\nSum = "<<sum;
    return 0;
 }
