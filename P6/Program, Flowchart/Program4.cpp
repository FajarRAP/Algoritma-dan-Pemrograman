#include<iostream>
#include<math.h>
using namespace std;

int kali(int n, int akhir, int angka){
    if(n==akhir){
        return n*angka;
    }else{
        return kali(n+1, akhir, angka);
    }
}

int main(){
    system("cls");
    int n=1;
    int angka, pengali;
    cout<<"Angka   : ";
    cin>>angka;
    cout<<"Pengali : ";
    cin>>pengali;
    cout<<"Hasil = "<<kali(n, angka, pengali);
    return 0;
}