#include<iostream>
using namespace std;
double* getAverage(int arr[], int size);
int main () {
int balance[5] = {1000, 2, 3, 17, 50};
double avg;
avg = getAverage( balance, 5 ) ;
cout << "Average value is: " << avg << endl;
return 0;
}
//balance[0] mtlb ek element pass kr rhe array ka 
//balance[ ] likho array pass krane ke liye.