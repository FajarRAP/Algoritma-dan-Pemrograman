#include<iostream>
using namespace std;

class cek{
    public:
        char karakter;

        int inputkarakter(){
            cout<<"Silakan input 1 karakter : ";
            cin>>karakter;
            return karakter;
        }

        void ngecek(){
            if(karakter>'1' && karakter<'9'){
                cout<<"Angka"<<endl;
            }else if(karakter>'a' && karakter<'z'){
                cout<<"Huruf Kecil"<<endl;
            }else if(karakter>'A' && karakter<'Z'){
                cout<<"Huruf Kapital"<<endl;
            }
        }
};

int main(){
    
    return 0;
}