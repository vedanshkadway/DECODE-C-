#include <iostream>
using namespace std;
int main()
{
    int r;
    cout << "enter the value of radius" << endl;
    cin >> r;
    if (2 * 3.14 * r > 3.14 * r * r)
    {
        cout << "circumference is greater than area." << endl;
        cout << "circumference>area" << endl;
    }
    else
    {
        cout << "circumference is smaller than area." << endl;
        cout << "circumference<area" << endl;
    }
}