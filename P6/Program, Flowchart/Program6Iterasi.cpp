#include<iostream>
using namespace std;

class fibonacci{
    public:
        void input(){
            cout<<"n : ";
            cin>>n;
            fibonaccii(n);
        }

        int fibonaccii(int n){
            for(int a=1; a<=n; a++){
                f3=f1+f2;
                cout<<f1<<" ";
                f1=f2;
                f2=f3;
            }
            return f1, f2, f3;
        }
    private:
        int f1=1, f2=1, f3, n;
};

int main(){
    system("cls");
    fibonacci angka;
    angka.input();
    return 0;
}