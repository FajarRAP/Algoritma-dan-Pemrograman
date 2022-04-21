#include<iostream>
using namespace std;

int fpb(int a, int b){
    int r;
    while(b>0){
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}

int main(){
    system("cls");
    int angka1, angka2;
    cout<<"angka 1 : ";
    cin>>angka1;
    cout<<"angka 2 : ";
    cin>>angka2;
    cout<<"FPB = "<<fpb(angka1, angka2)<<endl;
    // while(b>0){
    //     d=angka1%angka2;
    //     cout<<angka1<<" = "<<angka2<<" x "<<d<<" + ";
    //     c=angka1-(angka1-d);
    //     cout<<c<<endl;
    //     angka1=angka2;
    //     angka2=c;
    //     b--;

    // }
    return 0;
}