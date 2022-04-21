#include<iostream>
using namespace std;

class perkalian{
    public:
        void input(){
            cout<<"angka : ";
            cin>>angka;
            cout<<"Pengali : ";
            cin>>n;
            cout<<"Hasil = "<<kali(angka, n)<<endl;
        }

        int kali(int a, int b){
            for(int i=1; i<=b; i++){
                hasil+=a;
            }
            return hasil;
        }
        
    private:
        int n, angka, hasil=0;
};

int main(){
    system("cls");
    perkalian angka;
    angka.input();
    return 0;
}