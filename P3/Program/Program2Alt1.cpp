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

    if(x>y && x>z){
        cout<<"Bilangan terbesar adalah "<<x<<endl;
    }else if(y>x && y>z){
        cout<<"Bilangan terbesar adalah "<<y<<endl;
    }else{
        cout<<"Bilangan terbesar adalah "<<z<<endl;
    }
    return 0;
}