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
    banding(2, 8, 4);
    return 0;
}