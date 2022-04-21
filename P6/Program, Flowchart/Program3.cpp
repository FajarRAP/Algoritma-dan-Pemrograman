#include<iostream>
#include<math.h>
using namespace std;

class pangkat{
    public:
        void input(){
            cout<<"x : ";
            cin>>x;
            cout<<"y : ";
            cin>>y;
            cout<<"Hasil = ";
            logaritma(n, x, y);
        }

        int logaritma(int n, int x, int y){
            float hasil;
            if(n==0){
                hasil=exp(y*log(x));
                cout<<hasil<<endl;
                return n;
            }else{
                return logaritma(n-1, x, y);
            }
        }
        
    private:
        int n=5;
        int x, y;
};


int main(){
    system("cls");
    pangkat angka;
    angka.input();
    return 0;
}