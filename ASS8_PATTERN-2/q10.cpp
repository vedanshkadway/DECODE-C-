#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(int i =1;i<=2*n;i++){
        for(int j=1;j<=2*n-1;j++){
            if(i<=n&&(j<=i||j>=2*n-i)){
                cout<<"*";
            }
            else if(i>n&&(j<=(2*n-i+1)||j>=i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }cout<<endl;}}

        