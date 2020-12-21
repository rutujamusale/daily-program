//Program to find maximum, minimum among two numbers.
#include <iostream>
using namespace std;

int main(){

  int num1,num2;
  cin>>num1;
  cin>>num2;

  int max,min;
  if(num1>num2){
    max=num1;
    min=num2;
  }
  else{
    max=num2;
    min=num1;
  }

  cout<<"Max= "<<max<<endl;
  cout<<"Min= "<<min<<endl;


  return 0;
}
