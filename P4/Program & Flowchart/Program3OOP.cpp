#include<iostream>
using namespace std;

class mean{
    public:
        int n;
        float nilai, jumlah;

        int jml_data(){
            cout<<"Masukkan n : ";
            cin>>n;
            return n;
        }

        int hitung_nilai(){
            for(int a=1; a<=n; a++){
                cout<<"Masukkan nilai : ";
                cin>>nilai;
                jumlah+=nilai;
            }
            return jumlah;
        }

        float rata(){
            return jumlah/n;
        }

        void cetak(){
            cout<<"Rata-rata = "<<rata();
        }
};

int main(){
    system("cls");
    mean nilai;
    nilai.jml_data();
    nilai.hitung_nilai();
    nilai.cetak();
    return 0;
}