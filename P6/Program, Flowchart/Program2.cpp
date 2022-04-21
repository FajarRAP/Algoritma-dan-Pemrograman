#include<iostream>
using namespace std;

class perbandingan{
    public:
        void input(){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            cout<<"z : ";
            cin>>z;
            cout<<"Bilangan terbesar = ";
            banding(n, x, y, z);
        }
        
        int banding(int n, int a, int b, int c){
            if(n==0){
                int maks;
                if(a>b && a>c){
                    maks=a;
                }else if(b>a && b>c){
                    maks=b;
                }else{
                    maks=c;
                }
                cout<<maks<<endl;
                return n;
            }else{
                return banding(n-1, a, b, c);
            }
        }
        
    private:  
        int n=5;
        int x, y, z;
};


int main(){
    system("cls");
    perbandingan angka;
    angka.input();
    return 0;
}