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
            logaritma(x, y);
            cout<<"Hasil = "<<hasil<<endl;
        }

        int logaritma(int a, int b){
            for(int a=1; a<=5; a++){
                hasil=exp(y*log(x));
            }
            return hasil;
        }
        
    private:
        int x, y, hasil;
};

int main(){
    system("cls");
    pangkat angka;
    angka.input();
    return 0;
}