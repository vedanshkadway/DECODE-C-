#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"enter the two numbers"<<endl;
    cin>>n>>m;
    int* pt1=&n;
    int* pt2=&m;
    int prod=(*pt1)*(*pt2);
    cout<<prod<<endl;
}