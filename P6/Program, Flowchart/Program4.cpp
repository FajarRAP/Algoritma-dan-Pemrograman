#include<iostream>
#include<math.h>
using namespace std;

class perkalian{
    public:
        void input(){
            cout<<"Angka   : ";
            cin>>angka;
            cout<<"Pengali : ";
            cin>>pengali;
            cout<<"Hasil = "<<kali(n, pengali, angka);
        }
    
        int kali(int n, int akhir, int angka){
            if(n==akhir){
                total+=angka;
                return total;
            }else{
                total+=angka;
                return kali(n+1, akhir, angka);
            }
        }

    private:
        int total=0;
        int n=1;
        int angka, pengali;
};


int main(){
    system("cls");
    perkalian angka;
    angka.input();
    return 0;
}