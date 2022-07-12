#include<iostream>
using namespace std;

int maksimum(int a, int b){
    if(a>b){
        return a;
    }else if(a<b){
        return b;
    }else{
        return 1;
    }
}

int cariMaks(const int angka[], int n){
    int sementara=angka[0];
    for(int a=1; a<n; a++){
        sementara = maksimum(sementara, angka[a]);
    }
    return sementara;
}

int main(){
    int angka[]={1,2,3,4,5,6,7,8,9};
    int panjang=sizeof(angka)/sizeof(*angka);
    cout<<cariMaks(angka, panjang);
    return 0;
}