#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    int arr[n];
    int prod=1;
    for(int i=0;i<n;i++){
        cout<<"num dalo"<<endl;
        cin>>arr[i];
        prod*=arr[i];
    }
    cout<<"the prod of all num in arr"<<" "<<prod;}