#include <iostream>
using namespace std;
int main(){
    int length,breadth;
    cout<<"enter length and breadth of rectangle"<<endl;
    cin>>length>>breadth;
    if(length*breadth<2*(length+breadth)){
        cout<<"perimeter is greater than area."<<endl;
        cout<<"perimeter>area"<<endl;
    }
    else
    {cout<<"perimeter is smaller than area."<<endl;
    cout<<"perimeter<area"<<endl;

    }
}

