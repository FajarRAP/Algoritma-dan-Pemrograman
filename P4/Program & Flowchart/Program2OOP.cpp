#include<iostream>
using namespace std;

class ganjil{
    public:
        int a=1, pilih;

        int menukasus(){
            cout<<"1. For\n2. While\n3. Do while"<<endl;
            cout<<"Pilihanmu : ";
            cin>>pilih;
            return pilih;
        }

        void kasus(){
            switch(pilih){
                case 1:
                    for(a=1; a<=10; a++){
                        if(a%2==1){
                            cout<<a<<" ";
                        }
                    }
                    break;
                case 2:
                    while(a<=10){
                        if(a%2==1){
                            cout<<a<<" ";
                        }
                        a++;
                    }
                    break;
                case 3:
                    do{
                        if(a%2==1){
                            cout<<a<<" ";
                        }
                        a++;
                    }while(a<=10);
                    break;
            }
        }
};

int main(){
    system("cls");
    ganjil bilangan;
    bilangan.menukasus();
    bilangan.kasus();
    return 0;
}