#include<iostream>
using namespace std;

int fibonacci(int n){
    if(n==0||n==1){
        return n;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}

int main(){
    system("cls");
    int n;
    cout<<"n : ";
    cin>>n;
    for(int a=1; a<=n; a++){
        cout<<fibonacci(a)<<" ";
    }
    return 0;
}