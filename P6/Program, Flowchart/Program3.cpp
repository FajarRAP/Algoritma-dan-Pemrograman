#include<iostream>
#include<math.h>
using namespace std;

int logaritma(int n, int x, int y){
    float hasil;
    if(n==0){
        hasil=exp(y*log(x));
        cout<<hasil<<endl;
        return n;
    }else{
        return logaritma(n-1, x, y);
    }
}

int main(){
    system("cls");
    int n=5;
    int x, y;
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    cout<<"Hasil = ";
    logaritma(n, x, y);
    return 0;
}