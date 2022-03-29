#include<iostream>
using namespace std;

class angka{
    public:
        int x, y, z;

        int inputangka(){
            cout<<"Nilai x : ";
            cin>>x;
            cout<<"Nilai y : ";
            cin>>y;
            cout<<"Nilai z : ";
            cin>>z;
            return x, y, z;
        }

        void tampilangka(){
            if(x>y && x>z){
                cout<<"Bilangan terbesar adalah "<<x<<endl;
            }else if(y>x && y>z){
                cout<<"Bilangan terbesar adalah "<<y<<endl;
            }else{
                cout<<"Bilangan terbesar adalah "<<z<<endl;
            }
        }
};

int main(){
    angka perbandingan;
    perbandingan.inputangka();
    perbandingan.tampilangka();
    return 0;
}