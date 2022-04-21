#include<iostream>
using namespace std;

class perbandingan{
    public:
        void input(){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            cout<<"Bilangan terbesar = ";
            banding(n, x, y);
        }
        int banding(int n, int a, int b){
            if(n==0){
                if(a>b){
                    cout<<a<<endl;
                }else{
                    cout<<b<<endl;
                }
                return n;
            }else{
                return banding(n-1, a, b);
            }
        }
        
    private:
        int n=5;
        int x, y;
};


int main(){
    system("cls");
    perbandingan angka;
    angka.input();
    return 0;
}