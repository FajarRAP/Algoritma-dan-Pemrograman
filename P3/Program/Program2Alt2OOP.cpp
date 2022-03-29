#include<iostream>
using namespace std;

class angka{
    public:
        int x, y, z, maks=0;

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
            maks=x;
            cout<<"Bilangan terbesar adalah ";
            if(y>maks && y>z){
                maks=y;
            }else if(z>maks){
                maks=z;
            }
            cout<<maks<<endl;
        }
};

int main(){
    angka pembanding;
    pembanding.inputangka();
    pembanding.tampilangka();
    return 0;
}