#include<iostream>
using namespace std;

void cariMaksMin(const int angka[], int n){
    int maks=angka[0];
    int min=angka[0];
    for(int a=1; a<n; a++){
        if(maks<angka[a]){
            maks=angka[a];
        }else if(min>angka[a]){
            min=angka[a];
        }
    }
    cout<<"Maks\tMin"<<endl;
    cout<<maks<<"\t"<<min;
}

int main(){
    int angka[]={1,2,3,4,5,6,7,8,9};
    int panjang=sizeof(angka)/sizeof(*angka);
    cariMaksMin(angka, panjang);
    return 0;
}