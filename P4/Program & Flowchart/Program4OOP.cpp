#include<iostream>
using namespace std;

class sentinel{
    public:
        int n=1;
        float jumlah=0, nilai, mean;

        int hitung_jumlah(){
            cout<<"Nilai ke-1 (isi 0 jika sudah selesai) : ";
            cin>>nilai;

            while(nilai>0){
                jumlah+=nilai;
                cout<<"Nilai ke-"<<n+1<<" : ";
                cin>>nilai;
                n++;
                
            }
            return jumlah, n;
        }

        float rata(){
            return jumlah/(n-1);
        }

        void cetak(){
            cout<<"Rata - rata = "<<rata()<<endl;
        }
        
};

int main(){
    system("cls");
    sentinel nilai;
    nilai.hitung_jumlah();
    nilai.cetak();
    return 0;
}