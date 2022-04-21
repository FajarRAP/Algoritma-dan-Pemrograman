#include<iostream>
using namespace std;

int main(){
    system("cls");
    int n, angka, hasil=0;
    cout<<"angka : ";
    cin>>angka;
    cout<<"Pengali : ";
    cin>>n;
    for(int a=1; a<=n; a++){
        hasil+=angka;
    }
    cout<<"Hasil = "<<hasil<<endl;
    return 0;
}