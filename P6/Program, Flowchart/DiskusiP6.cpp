#include<iostream>
using namespace std;

class fungsi{
    public:
        void input(){
            cout<<"x : ";
            cin>>x;
            cout<<hitung(x)<<endl;
        }

        int hitung(int n){
            if(n==1){
                return n;
            }else{
                return n*hitung(n-1);
            }
        }
    private:
        int x, hasil=1;
};

class prosedur{
    public:
        void input(){
            cout<<"x : ";
            cin>>x;
            hitung2(x);
        }

        void hitung2(int n){
            if(n==1){
                cout<<hasil;
            }else{
                hasil*=n;
                hitung2(n-1);
            }
        }
    private:
        int x, hasil=1;
};

int main(){
    system("cls");
    int x, hasil=1;
    fungsi faktorial1;
    prosedur faktorial2;

    cout<<"Iteratif"<<endl;
    cout<<"x : ";
    cin>>x;
    for(int a=1; a<=x; a++){
        hasil*=a;
    }
    cout<<hasil<<endl<<endl;

    cout<<"Fungsi Rekursif"<<endl;
    faktorial1.input();
    cout<<endl;

    cout<<"Prosedur Rekursif"<<endl;
    faktorial2.input();
    return 0;
}
