#include <iostream>
 using namespace std;

int main()
{
    float radius, area;

    cout << "Enter the radius of circle : ";
    cin >> radius;
    area = 3.14 * radius * radius;
    cout << "Area of circle with radius "
              << radius << " is " << area;
}
