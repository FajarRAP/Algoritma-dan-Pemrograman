#include<iostream>
using namespace std;

int main(){
    system("cls");
    int angka[8];
    int temp;
    srand(time(NULL));

    for(int a=0; a<8; a++){
        angka[a]=rand() % 100+1;
    }
    cout<<"Unsorted\n";
    for(int a=0; a<8; a++){
        cout<<angka[a]<<" ";
    }

    cout<<endl;

    for(int a=0; a<8; a++){
        for(int b=a+1; b<8; b++){
            if(angka[a]>angka[b]){
                temp=angka[a];
                angka[a]=angka[b];
                angka[b]=temp;
            }
        }
    }

    cout<<"Sorted\n";
    for(int a=0; a<8; a++){
        cout<<angka[a]<<" ";
    }
    return 0;
}