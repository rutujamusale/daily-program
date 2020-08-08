// 3. Create an star pyramid using loops.
//              *
//              **
//              *
//              **
//              ***
//              **
// =============================================================
//

#include <iostream>
using namespace std;

int main(){
  int rows;
  cout << "Enter the number of rows: ";
  cin >> rows;
  cout << "Your pattern: "<< endl;

  for (int i = 0; i < rows; i++){
    for (int j = 0; j <= i; j ++ ){
      cout << "*";
    }
    cout << endl;
  }
  return 0;
  
}
