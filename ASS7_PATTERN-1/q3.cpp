#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of sides "<<endl;
    cin>>n;
    for(int i=65;i<=65+n;i++){
        for(int j=65;j<=i-1;j++){
            cout<<char(j)<<" ";
        }
        cout<<endl;
    }
}