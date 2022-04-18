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
    cout<<kali(1, 3, 8);
    return 0;
}