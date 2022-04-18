#include<iostream>
#include<math.h>
using namespace std;

int logaritma(int n, int x, int y){
    float hasil;
    if(n==0){
        return n;
    }else{
        hasil=exp(y*log(x));
        cout<<hasil<<endl;
        return (n-1, x, y);
    }
}

int main(){
    logaritma(2, 2, 4);
    return 0;
}