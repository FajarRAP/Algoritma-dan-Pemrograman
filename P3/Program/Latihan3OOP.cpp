#include<iostream>
using namespace std;

class cek{
    public:
        char karakter;
        string kata;

        int inputkarakter(){
            cout<<"Silakan input 1 karakter : ";
            cin>>karakter;
            return karakter;
        }

        void ngecek(){
            if(karakter>'-9' && karakter<'9'){
                kata="Bilangan (digit)";
            }else if(karakter>'a' && karakter<'z'){
                kata="Huruf Kecil";
            }else if(karakter>'A' && karakter<'Z'){
                kata="Huruf Kapital";
            }else{
                kata="Error, anda memasukkan lebih dari 1 karakter";
            }
            cout<<kata<<endl;
        }
};

int main(){
    cek karakter;
    karakter.inputkarakter();
    karakter.ngecek();
    return 0;
}