#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}

    for(int j=0;j<n;j++){
        if(j%2==0){
        arr[j]+=10;
        }
        else{
            arr[j]*=2;
        }
    }for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";}
}
