#include<iostream>
#include<windows.h>
using namespace std;

class bensin{
    public:
        int pilih, based;
        float uang=0, liter=0, harga=0, harga2=0;

        int jenisbbm(){
            cout<<"1. Pertamax\n2. Pertalite"<<endl;
            cout<<"Pilihanmu : ";
            cin>>pilih;
            return pilih;
        }

        int basedon(){
            cout<<endl;
            cout<<"Based on "<<endl;
            cout<<"1. Uang\n2. Liter"<<endl;
            cout<<"Pilihanmu : ";
            cin>>based;
            return based;
        }

        void cetak(){
            jenisbbm();
            switch(pilih){
                case 1:
                    harga2=1250;
                    basedon();
                    kasusbased();
                    break;
                case 2:
                    harga2=900;
                    basedon();
                    kasusbased();
                    break;
                default:
                    cout<<"Pilihan tidak tersedia"<<endl;
            }
        }
        
        void kasusbased(){
            cout<<endl;
            switch(based){
                case 1:
                    cout<<"Masukkan uang : ";
                    cin>>uang;
                    for(int a=harga; a<=uang; a+=harga2){
                        system("cls");
                        cout<<liter;
                        liter+=0.1;
                        Sleep(800);
                    }
                    liter-=0.1;
                    system("cls");
                    cout<<"Jumlah liter = "<<liter<<" liter"<<endl;
                    break;
                case 2:
                    cout<<"Masukkan liter : ";
                    cin>>liter;
                    for(float a=0.1; a<=liter; a+=0.1){
                        system("cls");
                        harga+=harga2;
                        cout<<harga;
                        Sleep(800);
                    }
                    harga+=harga2;
                    system("cls");
                    cout<<"Total bayar = Rp. "<<harga<<endl;
                    break;
                
            }
        }
};

int main(){
    system("cls");
    bensin ngisi;
    ngisi.cetak();
    return 0;
}