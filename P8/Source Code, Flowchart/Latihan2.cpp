#include<iostream>
#include<string.h>
using namespace std;

void selingKapital(string kata){
    for(int a=0; a<kata.length(); a++){
        if(a%2==1){
            kata[a]=toupper(kata[a]);
        }
    }
    cout<<kata;
}

int main(){
    selingKapital("algoritma pemrogaraman");
    return 0;
}