#include<iostream>
using namespace std;
float area(int r){
    float pi=3.14;
    int a = r*r;
    return pi*a;
}
int main(){
    int radius ;
    cout<<"radius bata"<<endl;
    cin>>radius;
    cout<<area(radius)<<endl;
}