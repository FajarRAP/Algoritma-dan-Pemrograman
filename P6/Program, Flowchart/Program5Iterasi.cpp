#include<iostream>
using namespace std;

int main(){
    system("cls");
    int hasil=1, n;
    cout<<"angka : ";
    cin>>n;
    for(int a=1; a<=n; a++){
        hasil*=a;
    }
    cout<<n<<"! = "<<hasil<<endl;
    return 0;
}