#include<iostream>
using namespace std;

class angka{
    public:
        int a, b, maks=0;

        int inputangka(){
            cout<<"Masukkan angka : ";
            cin>>a;
            cout<<"Masukkan angka : ";
            cin>>b;
            return a, b;
        }
       
        void tampilangka(){
            angka::maks=a;
            if(a>b){
                maks=a;
                cout<<"Bilangan terbesar "<<maks<<endl;
            }else if(a==b){
                cout<<"Kedua bilangan sama besar"<<endl;
            }
            else{
                maks=b;
                cout<<"Bilangan terbesar "<<maks<<endl;
            }
        }
};

int main(){
    angka banding;
    banding.inputangka();
    banding.tampilangka();
    return 0;
}