#include<iostream>
using namespace std;

int main(){
    int angkahari;
    string hari;
    cout<<"Masukkan angka : ";
    cin>>angkahari;

    switch(angkahari){
        case 1:
            hari="Senin";
        break;
        case 2:
            hari="Selasa";
        break;
        case 3:
            hari="Rabu";
        break;
        case 4:
            hari="Kamis";
        break;
        case 5:
            hari="Jumat";
        break;
        case 6:
            hari="Sabtu";
        break;
        case 7:
            hari="Minggu";
        break;
        default:
            hari="Inputan hari tidak valid";
    }
    cout<<"Hari "<<hari<<endl;
    return 0;
}