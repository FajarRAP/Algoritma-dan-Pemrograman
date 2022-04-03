#include<iostream>
#include<math.h>
using namespace std;

class kali{
    public:
        int a, b, jumlah=0;

        int input(){
            cout<<"Nilai a : ";
            cin>>a;
            cout<<"Nilai b : ";
            cin>>b;
            return a, b;
        }

        void hitung(){
            for(int i=1; i<=abs(b); i++){
                jumlah+=a;
            }
            if(b<0){
                jumlah=-jumlah;
                cout<<a<<" x "<<b<<" = "<<jumlah<<endl;
            }else{
                cout<<a<<" x "<<b<<" = "<<jumlah<<endl;
            }
        }
};

int main(){
    system("cls");
    kali angka;
    angka.input();
    angka.hitung();
    return 0;
}