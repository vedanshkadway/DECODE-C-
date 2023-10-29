#include <bits/stdc++.h>
using namespace std;
#include<vector>
int main(){
    int n,a;
    cout<<"size bta array ka"<<endl;
    cin>>n;
    vector<int>v ;
    
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        }
    int max;
    int max2;
    int max3;
    sort(v.begin(),v.end());
    for(int j=0;j<n;j++){
        cout<<v[j]<<" ";
    }cout<<endl;
    for(int i=0;i<n;i+=2){
        int j =i+1;
        if(v[i]!=v[j]){
            cout<<v[i];
            break;
        }else{
            continue;
        }
    }}