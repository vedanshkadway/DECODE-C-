#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the no. of sides "<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}