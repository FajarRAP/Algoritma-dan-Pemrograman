#include<iostream>
using namespace std;

class perbandingan{
    public:
        void input(){
            cout<<"a : ";
            cin>>a;
            cout<<"b : ";
            cin>>b;
            banding(a, b);
            cout<<"Nilai maksimum = "<<maks<<endl;
        }

        int banding(int a, int b){
            for(int i=1; i<=5; i++){
                if(a>b){
                    maks=a;
                }else{
                    maks=b;
                }
            }
            return maks;
        }
        
    private:
        int a, b, maks;
};

int main(){
    system("cls");
    perbandingan angka;
    angka.input();
    return 0;
}