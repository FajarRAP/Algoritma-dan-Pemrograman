#include<iostream>
using namespace std;

class fibonacci{
    public:
        int batas, b1=0, b2=1, b3;

        int inputbatas(){
            cout<<"Masukkan batas : ";
            cin>>batas;
            return batas;
        }

        void hitung(){
            cout<<"0, 1";
            while(true){
                b3=b2+b1;
                if(b3>batas){
                    break;
                }
                cout<<", "<<b3;
                b1=b2;
                b2=b3;
            }
        }

};

int main(){
    fibonacci pola;
    pola.inputbatas();
    pola.hitung();
    return 0;
}