  //Take 10 integers from keyboard using loop and print their mean value on the screen.
  #include<iostream>
  using namespace std;

  int main()
  {
      int i,n, sum=0;
      double mean;

      for(int i=0;i<10;i++)
      {
          cout<<"Enter the 10 integers: ";
          cin>>n;
          sum+=n;
      }
      mean =sum /10.0;
      cout<<"Mean value is: "<<sum<<" /10.0="<<mean;
      return 0;
  }
