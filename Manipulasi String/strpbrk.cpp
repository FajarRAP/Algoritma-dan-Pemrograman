#include"mstring.h"

int main(){
    // Mencari char
    // strpbrk(char1(char yg akan di search), char2(char1 akan disearch oleh isi char2))
    system("cls");
    char kata[100];
    char vokal[]="aiueoAIUEO";
    char *pch;
    cout<<"Mencari huruf vokal dalam string"<<endl;
    cout<<"Masukkan string : ";
    gets(kata);
    pch=strpbrk(kata,vokal);
    while(pch!=NULL){
        cout<<*pch<<" ";
        pch=strpbrk(pch+1,vokal);
    }
    return 0;
}