#include<iostream>
using namespace std;

int main(){
    system("cls");
    int a, b, c, maks;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    cout<<"c : ";
    cin>>c;
    for(int i=1; i<=5; i++){
        if(a>b && a>c){
            maks=a;
        }else if(b>a && b>c){
            maks=b;
        }else{
            maks=c;
        }
    }
    cout<<"Nilai maksimum = "<<maks<<endl;
    return 0;
}