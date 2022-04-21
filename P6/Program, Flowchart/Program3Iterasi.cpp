#include<iostream>
#include<math.h>
using namespace std;

int main(){
    system("cls");
    float hasil;
    int x, y;
    cout<<"x : ";
    cin>>x;
    cout<<"y : ";
    cin>>y;
    for(int a=1; a<=5; a++){
        hasil=exp(y*log(x));
    }
    cout<<"Hasil = "<<hasil<<endl;
    return 0;
}