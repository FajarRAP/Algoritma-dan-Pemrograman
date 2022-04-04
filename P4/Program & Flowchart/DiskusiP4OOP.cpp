#include<iostream>
#include<windows.h>
#include<iomanip>
using namespace std;

class bensin{
    public:
        int pilih;
        float uang, liter, harga, harga2, harga3;

        int jenisbbm(){
            cout<<"1. Pertamax\n2. Pertalite"<<endl;
            cout<<"Pilihanmu : ";
            cin>>pilih;
            return pilih;
        }

        int bayar(){
            cout<<"Berapa ribu : ";
            cin>>uang;
            return uang;
        }

        void kasuspilih(){
            switch(pilih){
                case 1:
                    harga=12500;
                    harga2=1250;
                    liter=uang/harga;
                    harga3=harga*liter;
                    break;
                case 2:
                    harga=7650;
                    harga2=765;
                    liter=uang/harga;
                    harga3=harga*liter;
                    break;
                default:
                    cout<<"Pilihan tidak tersedia"<<endl;
            }
        }
        void cetak(){
            jenisbbm();
            bayar();
            kasuspilih();
            for(float a=0.0; a<=true; a+=0.1){
                system("cls");
                
                cout<<"Liter = "<<a<<endl;
                cout<<"Harga = "<<harga2*(a*10)<<endl;
                harga=harga2;
                if(harga>=harga3){
                    break;
                }
                Sleep(800);
            }
        }
};

int main(){
    system("cls");
    bensin ngisi;
    ngisi.cetak();
    return 0;
}