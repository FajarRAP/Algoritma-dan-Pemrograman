#include<iostream>
using namespace std;

int main(){
    int nilai;
    char huruf;

    cout<<"Masukkan nilai : ";
    cin>>nilai;

    if(nilai>0 && nilai<=20){
        huruf='E';
    }else if(nilai>20 && nilai <=40){
        huruf='D';
    }else if(nilai>40 && nilai <=60){
        huruf='C';
    }else if(nilai>60 && nilai <=80){
        huruf='B';
    }else{
        huruf='A';
    }
    cout<<"Nilai huruf = "<<huruf<<endl;
    return 0;
}