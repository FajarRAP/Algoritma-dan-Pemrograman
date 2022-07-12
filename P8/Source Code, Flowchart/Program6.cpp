#include<iostream>
#include<string.h>
using namespace std;

bool palindrom(string s){
    int panjang=s.length();
    for(int a=0; a<panjang/2; a++){
        if(s[a]!=s[panjang-a-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int angka[]={1,2,3,4,5,6,7,8,9};
    int panjang=sizeof(angka)/sizeof(*angka);
    cout<<palindrom("lorem");
    return 0;
}