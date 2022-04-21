#include<iostream>
using namespace std;

int fpb(int a, int b){
    if(b==0){
        return a;
    }if(a<b){
        return fpb(b, a);
    }else{
        return fpb(a-b, b);
    }
}

int main(){
    system("cls");
    int angka1, angka2;
    cout<<"angka 1 : ";
    cin>>angka1;
    cout<<"angka 2 : ";
    cin>>angka2;
    cout<<"FPB = "<<fpb(angka1, angka2)<<endl;
    return 0;
}