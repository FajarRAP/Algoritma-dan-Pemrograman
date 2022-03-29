#include<iostream>
using namespace std;

class nilai{
    public:
        int angka;
        char huruf;

        int inputangka(){
            cout<<"Masukkan angka : ";
            cin>>angka;
            return angka;
        }

        void tampilhuruf(){
            if(angka>0 && angka<=20){
                huruf='E';
            }else if(angka>20 && angka<=40){
                huruf='D';
            }else if(angka>40 && angka<=60){
                huruf='C';
            }else if(angka>60 && angka<=80){
                huruf='B';
            }else{
                huruf='A';
            }
            cout<<"Nilai huruf = "<<huruf<<endl;
        }
};

int main(){
    nilai konversi;
    konversi.inputangka();
    konversi.tampilhuruf();
    return 0;
}