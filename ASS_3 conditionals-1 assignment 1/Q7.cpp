#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "enter the point x and y " << endl;
    cin >> x >> y;
    if (x == 0)
    {
        if (y == 0)
        {
            cout << "The point is origin" << endl;
        }
        else
        {
            cout << "The point lies on y-axis" << endl;
        }
    }
    else if (y == 0)
    {
        cout << "The point lies on x-axis" << endl;
    }
    else
    {
        cout << "The point lies on plane" << endl;
    }
}