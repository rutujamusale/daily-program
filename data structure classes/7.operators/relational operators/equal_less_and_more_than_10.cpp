//Input a number n and tell whether it is equal to,less than or more than 10.
#include <iostream>
using namespace std;

int main()
{
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  if(n>10){
    cout<<"More than 10"<<endl;
  }
  else if(n<10){
    cout<<"Less than 10"<<endl;
  }
  else{
    cout<<"Equal th 10"<<endl;
  }

  return 0;
}
