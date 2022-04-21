#include<iostream>
using namespace std;



int main(){
    system("cls");
    int a, b, maks;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    for(int i=1; i<=5; i++){
        if(a>b){
            maks=a;
        }else{
            maks=b;
        }
    }
    cout<<"Nilai maksimum = "<<maks<<endl;
    return 0;
}