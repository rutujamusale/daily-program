// 3. Create a function showEmployee() in such a way that it should accept employee name,
// and it’s salary and display both, and if the salary is missing in function call it should show it as 9000

#include <iostream>
#include <string>
using namespace std;

void showEmployee(){
  string name;
  string salary;
  cout << "Enter your name: ";
  getline(cin, name);
  cout << endl << "Note: Enter 'Q/q' for no input!" << endl;
  cout << "\nEnter your salary: ";
  cin >> salary;
  if (salary == "Q" || salary == "q"){
    cout << "Your Name: " << name << endl;
    cout << "Your Salary: 9000" << endl;
  }
  else{
    double new_salary = stof(salary);       
    cout << "Your Name: " << name << endl;
    cout << "Your Salary: " << salary << endl;

  }
}


int main(){
    showEmployee();
    return 0;
}
