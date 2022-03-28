#include<iostream>
using namespace std;

int main(){
    int a, b;
    cout<<"Masukkan A : ";
    cin>>a;
    cout<<"Masukkan B : ";
    cin>>b;
    if(a>b){
        cout<<"Bilangan terbesar adalah A = "<<a<<endl;
    }else if(a==b){
        cout<<"Kedua bilangan sama besaar"<<endl;
    }else{
        cout<<"Bilangan terbesar adalah B = "<<b<<endl;
    }
    return 0;
}