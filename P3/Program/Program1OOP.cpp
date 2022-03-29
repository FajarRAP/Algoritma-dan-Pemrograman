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
            }else{
                maks=b;
            }
            cout<<"Bilangan terbesar "<<maks<<endl;
        }
};

int main(){
    angka titit;
    titit.inputangka();
    titit.tampilangka();
    return 0;
}