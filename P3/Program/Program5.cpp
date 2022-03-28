#include<iostream>
using namespace std;

int main(){
    int angkahari;
    string hari;
    cout<<"Masukkan angka : ";
    cin>>angkahari;
    if(angkahari==1){
        hari="Senin";
    }else if(angkahari==2){
        hari="Selasa";
    }else if(angkahari==3){
        hari="Rabu";
    }else if(angkahari==4){
        hari="Kamis";
    }else if(angkahari==5){
        hari="Jumat";
    }else if(angkahari==6){
        hari="Sabtu";
    }else if(angkahari==7){
        hari="Minggu";
    }else{
        hari="Inputan tidak valid";
    }
    cout<<"Hari "<<hari<<endl;
    return 0;
}