#include<iostream>
using namespace std;

float rata(const int x[], int n){
    int jumlah=0;
    for(int a=0; a<n; a++){
        jumlah+=x[a];
    }
    return jumlah/n;
}

int main(){
    int angka[]={1,2,3,4,5,6,7,8,9};
    int panjang=sizeof(angka)/sizeof(*angka);
    cout<<rata(angka, panjang);
    return 0;
}