#include<iostream>
using namespace std;

class maksmintot{
    public:
        int angka, min=0, maks=0, total=0;

        int input(){
            cout<<"Masukkan angka (0 jika selesai): ";
            cin>>angka;
            total+=angka;
            return angka, total;
        }

        void hitung(){
            input();
            min=angka;
            while(angka>0){
                cout<<"Masukkan angka : ";
                cin>>angka;
                total+=angka;
                if(angka<min && angka!=0){
                    min=angka;
                }else if(angka>min && angka!=0){
                    maks=angka;
                }
            }
            if(maks==min){
                cout<<"Semua bilangan sama besar"<<endl;
            }else{
                cout<<"Maks  = "<<maks<<endl;
                cout<<"Min   = "<<min<<endl;
            }      
            cout<<"Total = "<<total<<endl;
        }
};

int main(){
    system("cls");
    maksmintot angka;
    angka.hitung();
    return 0;
}