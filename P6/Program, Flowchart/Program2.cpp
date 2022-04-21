#include<iostream>
using namespace std;

int banding(int n, int a, int b, int c){
    if(n==0){
        int maks=a;
        if(maks>b){
            maks=a;
        }else{
            maks=b;
        }
        if(maks<c){
            maks=c;
        }else{
            maks;
        }
        cout<<maks<<endl;
        return n;
    }else{
        return banding(n-1, a, b, c);
    }
}

int main(){
    system("cls");
    int n=5;
    int x, y, z;
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    cout<<"z : ";
    cin>>z;
    cout<<"Bilangan terbesar = ";
    banding(n, x, y, z);
    return 0;
}