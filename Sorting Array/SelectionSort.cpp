#include<iostream>
using namespace std;

int main(){
    system("cls");
    int angka[]={84, 87, 78, 16, 94, 36, 87, 93, 50};
    int len=sizeof(angka)/sizeof(*angka);
    int dari=0, tempat, min, temp;
    
    cout<<"Unsorted"<<endl;
    for(int a=0; a<len; a++){
        cout<<angka[a]<<" ";
    }
    cout<<endl<<endl<<"Hasil"<<endl;
    for(dari=0; dari<len; dari++){
        min=angka[dari];
        for(int i=dari+1; i<len; i++){
            if(min>=angka[i]){
                min=angka[i];
                tempat=i;
            }
        }
        temp=angka[dari];
        angka[dari]=min;
        angka[tempat]=temp;

        cout<<"Perulangan ke-"<<dari<<" : ";
        for(int a=0; a<len; a++){
            cout<<angka[a]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<"Sorted"<<endl;
    for(int a=0; a<len; a++){
        cout<<angka[a]<<" ";
    }
    return 0;
}
