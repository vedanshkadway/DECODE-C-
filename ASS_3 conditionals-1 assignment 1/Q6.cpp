#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter the three numbers" << endl;
    cin >> a >> b >> c;
    if (a < b)
    {
        if (a > c)
        {
            cout << "the smallest of three is"
                 << " " << c << endl;
        }
        else
        {
            cout << "the smallest of three is"
                 << " " << a << endl;
        }
    }
    else
    {
        cout << "the smallest of three is"
             << " " << b << endl;
    }
}
