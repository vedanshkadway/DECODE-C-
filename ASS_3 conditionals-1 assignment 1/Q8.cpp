#include <iostream>
using namespace std;
int main()
{
    int x1, y1, x2, y2, x3, y3;
    cout << "Enter the x and y coordinate of first point" << endl;
    cin >> x1 >> y1;
    cout << "Enter the x and y coordinate of second point" << endl;
    cin >> x2 >> y2;
    cout << "Enter the x and y coordinate of third point" << endl;
    cin >> x3 >> y3;
    if ((y2 - y1) / (x2 - x1) == (y3 - y1) / (x3 - x1) && (y3 - y1) / (x3 - x1) == (y2 - y3) / (x2 - x3) && (y2 - y1) / (x2 - x1) == (y2 - y3) / (x2 - x3))
    {
        cout << "All three points lies on same line" << endl;
    }
    else
    {
        cout << "points are not collinear" << endl;
    }
}