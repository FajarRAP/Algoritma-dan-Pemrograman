#include"mstring.h"

int main(){
    // Mencari string pake string
    // strstr()
    system("cls");
    char kata[100];
    char kata2[100];
    char *ptr;
    cout<<"Mencari string dengan string"<<endl;
    cout<<"Masukkan string : ";
    gets(kata);
    cout<<"Masukkan yang ingin dicari dari string di atas : ";
    gets(kata2);
    ptr=strstr(kata,kata2);
    if(ptr!=NULL){
        cout<<"Ditemukan"<<endl;
    }else{
        cout<<"Tidak ditemukan"<<endl;
    }
    return 0;
}