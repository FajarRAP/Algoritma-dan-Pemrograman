#include<iostream>
using namespace std;

int main(){
    int x, y, z;
    cout<<"Nilai x : ";
    cin>>x;
    cout<<"Nilai y : ";
    cin>>y;
    cout<<"Nilai z : ";
    cin>>z;

    cout<<"Bilangan terbesar adalah ";
    if(x>y && x>z){
        cout<<x<<endl;
    }else if(y>x && y>z){
        cout<<y<<endl;
    }else{
        cout<<z<<endl;
    }
    
    return 0;
}