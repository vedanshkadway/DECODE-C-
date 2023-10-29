#include<iostream>
using namespace std;
void odds(int a,int b){
    for(int i=a+1;i<=b;i++){
       if (i%2!=0){
        cout<<i<<" ";
       }
    }
    
}
int main(){
    int a,b;
    cout<<"pehle small number then big num dena"<<endl;
    cin>>a>>b;
    odds(a,b);
}