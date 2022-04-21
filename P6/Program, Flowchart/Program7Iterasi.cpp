#include<iostream>
using namespace std;

class gcd{
    public:
        void input(){
            cout<<"angka 1 : ";
            cin>>angka1;
            cout<<"angka 2 : ";
            cin>>angka2;
            cout<<"FPB = "<<fpb(angka1, angka2)<<endl;
        }

        int fpb(int a, int b){
            int c;
            while(b>0){
                c=a%b;
                a=b;
                b=c;
            }
            return a;
        }
        
    private:
        int angka1, angka2;
};


int main(){
    system("cls");
    gcd angka;
    angka.input();
    return 0;
}