#include <iostream>
using namespace std;
int main()
{
    char x, y;
    cout << "Enter the two alphabet" << endl;
    cin >> x >> y;

    int ascii1 = x;
    int ascii2 = y;

    cout << "the ascii value of first character is"
         << " " << ascii1 << endl;
    cout << "the ascii value of second character is"
         << " " << ascii2 << endl;
    cout << ascii1 - ascii2 << endl;
}