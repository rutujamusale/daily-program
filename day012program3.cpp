// 2. Create a function that can accept two arguments name and age and print its value.

#include <iostream>
#include <string>
using namespace std;

void name_age(){
  string name;
  int age;
  cout << "Enter your name: ";
  getline(cin, name);     // we use getline() to get input with spaces.
  cout << endl << "Enter your age: ";
  cin >> age;
  cout << "Your name: " << name << endl;
  cout << "Your age: " << age << endl;
}

int main(){
  name_age();
  return 0;
}
