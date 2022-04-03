#include<iostream>
using namespace std;

class cek{
    public:
        float angka;

        int inputangka(){
            cout<<"Masukkan angka : ";
            cin>>angka;
            return angka;
        }

        void output(){
            if((int)angka>0 && (int)angka<=0){
                cout<<"Bilangan Bulat";
            }else{
                cout<<"Bilangan Real";
            }
        }
};

int main(){
    cek angka;
    angka.inputangka();
    angka.output();
    return 0;
}