#include <bits/stdc++.h>
using namespace std;
int main() {
    int n,a;
 cout << "Enter the number\n";
 cin >> n; // user will give ‘n’ a value.
 int sum = 0;
 while(n>0){
    a = n%10;
    if(a%2==0){
        sum+=a;
    }
    n = n/10;
 }
 cout<<"sum of even digits is"<<" "<<sum<<endl;
}

