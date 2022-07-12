#include<iostream>
using namespace std;

void maksimum(const int angka[], int n){
    int maks=angka[0];
    int indeks=0;
    for(int a=1; a<n; a++){
        if(maks<angka[a]){
            maks=angka[a];
            indeks=a;
        }
    }
    cout<<maks<<"\t"<<indeks;
}

void frekuensi(int angka[], int n){
    int f[n];
    for(int a=0; a<n; a++){
        f[angka[a]]++;
    }
}

int main(){
    int angka[]={1,2,3,4,5,6,7,8,9};
    int panjang=sizeof(angka)/sizeof(*angka);
    maksimum(angka, panjang);
    cout<<endl;
    frekuensi(angka, panjang);
    return 0;
}