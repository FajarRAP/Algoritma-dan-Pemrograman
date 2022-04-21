#include<iostream>
using namespace std;

int main(){
    system("cls");
    int f1=1, f2=1, f3, n;
    cout<<"n : ";
    cin>>n;
    for(int a=1; a<=n; a++){
        f3=f1+f2;
        cout<<f1<<" ";
        f1=f2;
        f2=f3;
    }
    return 0;
}