#include<iostream>
using namespace std;

class faktorial{
    public:
        void input(){
            cout<<"angka : ";
            cin>>angka;
            cout<<angka<<"! = "<<faktoriall(angka);
        }

        int faktoriall(int n){
            if(n==1){
                return n;
            }else{
                return n*faktoriall(n-1);
            }
        }

    private:
        int angka;
};


int main(){
    system("cls");
    faktorial angka;
    angka.input();
    return 0;
}