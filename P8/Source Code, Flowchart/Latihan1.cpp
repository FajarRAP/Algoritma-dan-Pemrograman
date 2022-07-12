#include<iostream>
using namespace std;

int panjangKarakter(string kata){
    int panjang=0;
    for(int a=0; a<kata.length(); a++){
        panjang++;
    }
    return panjang;
}

int main(){
    cout<<panjangKarakter("lorem");
    return 0;
}