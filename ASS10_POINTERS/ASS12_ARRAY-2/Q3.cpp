#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    int flag=false;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
    for(int j=0;j<n;j++){
        if(arr[j+1]>=arr[j]){
            flag =true;
            continue;
           
        }
        else{
            flag=false;
            cout<<"not sorted";
            break;
        }
    }if(flag==true){cout<<"sorted";}
    }