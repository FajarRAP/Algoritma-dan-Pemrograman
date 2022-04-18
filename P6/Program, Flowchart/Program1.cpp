#include<iostream>
using namespace std;

int banding(int n, int a, int b){
    if(n==0){
        if(a>b){
            cout<<a<<endl;
        }else{
            cout<<b<<endl;
        }
        return n;
    }else{
        return banding(n-1, a, b);
    }
}

int main(){
    system("cls");
    int n=5;
    int x, y;
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    cout<<"Bilangan terbesar = ";
    banding(n, x, y);
    return 0;
}