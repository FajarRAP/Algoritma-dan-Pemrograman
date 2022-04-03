#include<iostream>
using namespace std;

class jumlah{
    public:
        int n;
        float hasil=0;

        int input(){
            cout<<"Masukkan n : ";
            cin>>n;
            return n;
        }

        void hitung(){
            for(int a=1; a<=n; a++){
                hasil+=(float)1/a;
                if(a==n){
                    cout<<"1/"<<a<<" = ";
                }else{
                    cout<<"1/"<<a<<" + ";
                }
            }
            cout<<hasil<<endl;
        }
};

int main(){
    system("cls");
    jumlah deret;
    deret.input();
    deret.hitung();
    return 0;
}