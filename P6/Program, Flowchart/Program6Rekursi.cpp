#include<iostream>
using namespace std;

class fibonacci{
    public:
        void input(){
            cout<<"n : ";
            cin>>n;
            for(int a=1; a<=n; a++){
                cout<<fibo(a)<<" ";
            }
        }

        int fibo(int n){
            if(n==0||n==1){
                return n;
            }else{
                return fibo(n-1)+fibo(n-2);
            }
        }

        
    private:
        int n;
};

int main(){
    system("cls");
    fibonacci angka;
    angka.input();
    return 0;
}