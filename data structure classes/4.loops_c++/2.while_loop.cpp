// Program to add only positive numbers.

#include<iostream>

using namespace std;

int main(){
  int num;
  int sum=0;

  cout<<"Enter the number: ";

  cin>>num;
  while(num>=0){
    sum+=num;
    cout<<"Enter the number: ";
    cin>>num;
  }

  cout<<"\nThe sum is: "<<sum<<endl;

  return 0;
}
