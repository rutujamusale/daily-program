//Write a program that converts spelled-out numbers such as "zero" and
//"two" into digits, such as 0 and 2. When the user inputs a number,
//the program should print out the corresponding digit. Do it for the values 0,
//1, 2, 3 and 4 and write out "not a number I know" if the user enters something that doesn't
//correspond, such as "Stupid computer!"
#include <iostream>
using namespace std;

int main ()
{
    string number;
    cout << "Enter one of the numbered letter from zero to four.\n";
    cin >> number;
    if(number=="zero")
    {
        cout << "0" << endl;
    }
    else if(number=="one")
    {
        cout << "1" << endl;
    }
    else if(number=="two")
    {
        cout << "2" << endl;
    }
    else if(number=="three")
    {
        cout << "3" << endl;
    }
    else if(number=="four")
    {
        cout << "4" << endl;
    }
    else
    {
        cout << "not a number I know \n";
    }
    return 0;

}
