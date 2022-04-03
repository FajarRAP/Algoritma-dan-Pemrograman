#include<iostream>
using namespace std;

class deret{
    public:
        int jumlah=0, n;

        int inputbatas(){
            cout<<"Masukkan n : ";
            cin>>n;
            return n;
        }

        void hitung(){
            for(int a=1; a<=n; a++){
                jumlah++;
            }
            cout<<"Jumlah = "<<jumlah<<endl;
        }
};

int main(){
    system("cls");
    deret angka;
    angka.inputbatas();
    angka.hitung();
    return 0;
}