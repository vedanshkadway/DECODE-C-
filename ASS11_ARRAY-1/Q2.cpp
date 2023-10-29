#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    int max=arr[0];
    int max2;
    for(int j=1;j<n;j++){
        if(arr[j]>max){
            max2=max;
            max=arr[j];
        }
    }cout<<max2;}