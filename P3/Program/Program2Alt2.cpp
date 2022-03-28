#include<iostream>
using namespace std;

int main(){
    int x, y, z, maks=0;
    cout<<"Nilai x : ";
    cin>>x;
    cout<<"Nilai y : ";
    cin>>y;
    cout<<"Nilai z : ";
    cin>>z;

    maks=x;
    if(y>maks && y>z){
        maks=y;
        cout<<maks<<endl;
    }else if(z>maks){
        maks=z;
        cout<<maks<<endl;
    }else{
        cout<<maks<<endl;
    }
    return 0;
}