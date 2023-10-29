#include <iostream>
using namespace std;
int main()
{
    char ch;
    int a;
    cout << "enter any character" << endl;
    cin >> ch;
    int ascii = ch;
    if ((ascii >= 97 && ascii <= 122) || (ascii >= 65 && ascii <= 90))
    {
        cout << "The input character is alphabet." << endl;
    }
    else if (ascii >= 48 && ascii <= 57)
    {
        cout << "The input character is digit." << endl;
    }
    else
    {
        cout << "The input character is special character." << endl;
    }
}