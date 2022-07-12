#include<iostream>
#include<math.h>
using namespace std;

long kuadrat(int n){
    return n*n;
}

float rata(const int x[], int n){
    int jumlah=0;
    for(int a=0; a<n; a++){
        jumlah+=x[a];
    }
    return jumlah/n;
}

float standarDeviasi(const int x[], int n, float rata){
    int jumlah=0;
    for(int a=0; a<n; a++){
        jumlah+=kuadrat(x[a]-rata);
    }
    return sqrt(jumlah/(n-1));
}

int main(){
    int angka[]={1,2,3,4,5,6,7,8,9};
    int panjang=sizeof(angka)/sizeof(*angka);
    cout<<standarDeviasi(angka, panjang, rata(angka, panjang));
    return 0;
}