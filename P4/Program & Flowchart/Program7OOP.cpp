#include<iostream>
using namespace std;

class minimun{
    public:
        int nilai, min;

        int input(){
            cout<<"Masukkan angka (input 0 jika selesai) : ";
            cin>>nilai;
            return nilai;
        }

        void hitung(){
            min=nilai;
            while(nilai>0){
                cout<<"Masukkan angka : ";
                cin>>nilai;
                if(nilai<min && nilai!=0){
                    min=nilai;
                }
                
            }
            cout<<"Nilai minimun = "<<min<<endl;
        }
};

int main(){
    system("cls");
    minimun angka;
    angka.input();
    angka.hitung();
    return 0;
}