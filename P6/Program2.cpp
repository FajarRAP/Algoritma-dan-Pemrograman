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
    banding(2, 11, 9, 18);
    return 0;
}