//Program to check if a triangle is scalene, isosceles or equilateral.
#include<iostream>
using namespace std;

int main(){

  int side_a,side_b,side_c;
  cout<<"Three side of a triangle:\n";
  cin>>side_a;
  cin>>side_b;
  cin>>side_c;

  if(side_a==side_b && side_b==side_c){
    cout<<"This is an equilateral triangle.\n";
  }
  else if(side_a==side_b||side_a==side_c||side_b==side_c){
    cout<<"This is an isosceles triangle.\n";
  }
  else{
    cout<<"This is an scalene triangle.\n";
  }

  return 0;
}
