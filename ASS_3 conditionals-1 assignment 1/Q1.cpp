#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "Enter the two different integer x and y, " << endl;
    cin >> x >> y;
    if (x > y)
    {
        cout << "first number"
             << " " << x << " "
             << "is largest." << endl;
    }
    else
    {
        cout << "second number"
             << " " << y << " "
             << "is largest." << endl;
    }
}