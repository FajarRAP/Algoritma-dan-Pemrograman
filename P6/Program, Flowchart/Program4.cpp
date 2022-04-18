#include<iostream>
#include<math.h>
using namespace std;

int total=0;

int kali(int n, int akhir, int angka){
    if(n==akhir){
        total+=angka;
        return total;
    }else{
        total+=angka;
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
    cout<<"Hasil = "<<kali(n, pengali, angka);
    return 0;
}