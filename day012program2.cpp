    1. Write a program using function to add the given numbers.
// (numbers can be negative or positive, and no limit for the input numbers)
// =============================================

#include <iostream>
#include <string>
using namespace std;

// note : we use stoi() to convert string to int

void add(){
  int sum = 0;
  string num;
  while (true){
    cout << "Enter the numbers :";
    cin >> num;
    cout << endl;
    if (num == "q" || num == "Q"){
      break;
    }
    else{
      int new_num = stoi(num);
      sum += new_num;
      continue;
    }
  }
  cout << "Sum of numbers: " << sum << endl;
}

int main(){
  cout << "NOTE: Press Q/q to exit!" << endl;
  add();
  return 0;
}
