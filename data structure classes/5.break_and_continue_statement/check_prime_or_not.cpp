//Write a program to check if a given number is prime or not.

#include<iostream>
using namespace std;

int main(){
  int n;
  cout<<"Enter the number: ";
  cin>>n;

  int i;
  for(i=2;i<n;i++){
    if(n%i==0){
      cout<<"Not a prime Number"<<endl;
      break;
    }
  }
  if(i==n){
    cout<<"Prime Number"<<endl;
  }

  return 0;
}
