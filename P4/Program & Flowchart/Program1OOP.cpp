#include<iostream>
using namespace std;

class looping{
    public:
        int a=1, pilih;

        int pilihmenu(){
            cout<<"1. For\n2. While\n3. Do While"<<endl;
            cout<<"Silakan pilih : ";
            cin>>pilih;
            return pilih;
        }

        void kasuspilih(){
            switch(pilih){
                case 1:
                    for(int a=1; a<=4; a++){
                        cout<<a<<" ";
                    }
                    break;
                case 2:
                    while(a<=4){
                        cout<<a<<" ";
                        a++;
                    }
                    break;
                case 3:
                    do{
                        cout<<a<<" ";
                        a++;
                    }while(a<=4);
                    break;
            }
        }
};

int main(){
    system("cls");
    looping angka;
    angka.pilihmenu();
    angka.kasuspilih();
    return 0;
}