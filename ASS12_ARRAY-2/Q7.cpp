#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    int v[n];
    bool flag=false;
    for(int i=0;i<n;i++){
        cin>>v[i];}
    for(int i=0,j=n-1;i<=j;i++,j--){
        if(v[i]==v[j]){
            flag=true;
            continue;
        }
        else{
            flag = false;
            cout<<"not a palindrome";
            break;
        }}
        if(flag==true)cout<<"palindrome";}
    