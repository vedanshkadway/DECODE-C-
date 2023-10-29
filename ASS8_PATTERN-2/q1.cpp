#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of N"<<endl;
    cin>>n;
    
    for(int i=1;i<n;i++){
        int p=1;
        for(int j=1;j<=n+i-2;j++){
            if(n-i-j>0) cout<<" ";
            else{ cout<<p;
            p++;
            }
        }cout<<endl;
    
}}