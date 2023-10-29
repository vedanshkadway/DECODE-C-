#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    int evensum=0;
    int oddsum=0;

    for(int j=0;j<n;j++){
        if(j%2==0){
        oddsum+=arr[j];
        }
        else{
            evensum+=arr[j];
        }
    }cout<<evensum-oddsum;
}