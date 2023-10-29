#include <iostream>
using namespace std;
int main()
{
    int  r, s, t, u, v, w, y, z, i;
    cout << "Enter the amount"
         << " " << endl;
    cin >> r;
    
    switch (r >= 500)
    {
    case 1:
        cout << "No.of 500 rupees note"
             << " " << r / 500 << endl;
    }
    s = r - (r / 500) * 500;
    switch (s >= 100)
    {
    case 1:
        cout << "No.of 100 rupees note"
             << " " << s / 100 << endl;
    }
    t = s - (s / 100) * 100;
    switch (t >= 50)
    {
    case 1:
        cout << "No.of 50 rupees note"
             << " " << t / 50 << endl;
    }

    u = t - (t / 50) * 50;
    switch (u >= 20)
    {
    case 1:
        cout << "No.of 20 rupees note"
             << " " << u / 20 << endl;
    }

    v = u - (u / 20) * 20;
    switch (v >= 10)
    {
    case 1:
        cout << "No.of 10 rupees note"
             << " " << v / 10 << endl;
    }
    w = v - (v / 10) * 10;
    switch (w >= 5)
    {
    case 1:
        cout << "No.of 5 rupees coin"
             << " " << w / 5 << endl;
    }
    y = w - (w / 5) * 5;
    switch (y >= 2)
    {
    case 1:
        cout << "No.of 2 rupees coin"
             << " " << v / 2 << endl;
    }
    z = y - (y / 2) * 2;
    switch (z != 0)
    {
    case 1:
        cout << "No.of 1 rupees coin"
             << " " << z << endl;
    }
}