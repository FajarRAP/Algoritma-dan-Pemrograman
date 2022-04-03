#include<iostream>
using namespace std;

class sisabagi{
    public:
        void operasi(){
            for(int a=1; a<=100; a++){
                if(a%3==0 && a%5==0){
                    if(a>80){
                        cout<<a;
                    }else{
                        cout<<a<<", ";
                    }
                    
                }
            }
        }
};

int main(){
    system("cls");
    sisabagi angka;
    angka.operasi();
    return 0;
}