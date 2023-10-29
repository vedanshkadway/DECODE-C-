#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"enter the year"<<endl;
    cin>>year;
    if(year%4==0){
        if(year%100==0){
            if(year%400==0){
                cout<<"it is leap year";}
            else{
            cout<<"It is not leap year"<<endl;
        }
    }
        else{
            cout<<"it is leap year"<<endl;

        }
    
    }
    else{
        cout<<"it is not leap year"<<endl;

    }
}
