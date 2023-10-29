#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the three sides of triangle" << endl;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "triangle is equilateral triangle " << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << "triangle is isosceles triangle " << endl;
    }
    else
    {
        cout << "triangle is scalene triangle" << endl;
    }
}
