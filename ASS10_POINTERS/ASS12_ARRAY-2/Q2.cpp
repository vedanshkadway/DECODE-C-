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
    
    max = v[n-1];
    max2 = v[n-2];
    max3 = v[n-3];

    cout<<max<<" "<<max2<<" "<<max3;}