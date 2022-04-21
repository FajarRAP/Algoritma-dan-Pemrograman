#include<iostream>
using namespace std;

class perbandingan{
    public:
        void input(){
            cout<<"a : ";
            cin>>a;
            cout<<"b : ";
            cin>>b;
            cout<<"c : ";
            cin>>c;
            banding(a, b, c);
            cout<<"Nilai maksimum = "<<maks<<endl;
        }

        int banding(int a, int b, int c){
            for(int i=1; i<=5; i++){
                if(a>b && a>c){
                    maks=a;
                }else if(b>a && b>c){
                    maks=b;
                }else{
                    maks=c;
                }
            }
            return maks;
        }
        
    private:
        int a, b, c, maks;
};

int main(){
    system("cls");
    perbandingan angka;
    angka.input();
    return 0;
}