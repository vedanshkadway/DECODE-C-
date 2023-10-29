#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, b, a, x;
    cout << "Enter the number\n";
    cin >> n; // user will give ‘n’ a value.
    x = n;
    int c = 0;
    while (n > 0)
    {

        a = n % 10;
        n = n / 10;
        b = a + c;
        c = b * 10;
    }
    
    cout << "sum of number and its reverse is"
         << " " << x + b;
}
