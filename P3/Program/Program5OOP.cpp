#include<iostream>
using namespace std;

class hari{
    public:
        int angka;
        string namahari;

        int inputangka(){
            cout<<"Masukkan angka : ";
            cin>>angka;
            return angka;
        }

        void tampilkata(){
            switch(angka){
                case 1:
                    namahari="Senin";
                    break;
                case 2:
                    namahari="Selasa";
                    break;
                case 3:
                    namahari="Rabu";
                    break;
                case 4:
                    namahari="Kamis";
                    break;
                case 5:
                    namahari="Jumat";
                    break;
                case 6:
                    namahari="Sabtu";
                    break;
                case 7:
                    namahari="Minggu";
                    break;
                default:
                    cout<<"Inputan tidak valid";
            }
            cout<<"Hari "<<namahari<<endl;
        }
};

int main(){
    hari konversi;
    konversi.inputangka();
    konversi.tampilkata();
    return 0;
}