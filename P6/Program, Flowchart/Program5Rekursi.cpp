#include<iostream>
using namespace std;

int faktorial(int n){
    if(n==1){
        return n;
    }else{
        return n*faktorial(n-1);
    }
}

int main(){
    system("cls");
    int angka;
    cout<<"angka : ";
    cin>>angka;
    cout<<angka<<"! = "<<faktorial(angka);
    return 0;
}