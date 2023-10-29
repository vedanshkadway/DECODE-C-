#include <vector>
#include <iostream>
using namespace std;
int main()
{int x;
cout<<"enter the number x"<<endl;
cin>>x;
int count =0;
    vector<int> v;
    v.push_back(1);
    v.push_back(6);
    v.push_back(2);
    v.push_back(3);
    v.push_back(7);
    v.push_back(4);
    v.push_back(8);
for(int i=0;i<v.size();i++){
    if(v[i]>x){
        count+=1;
    }

}cout<<count;


    
}