#include<iostream>
using namespace std;

class faktorial{
    public:
        void input(){
            cout<<"angka : ";
            cin>>n;
            faktoriall(n);
            cout<<n<<"! = "<<hasil<<endl;
        }

        int faktoriall(int n){
            for(int a=1; a<=n; a++){
                hasil*=a;
            }
            return hasil;
        }
        
    private:
    int hasil=1, n;
};

int main(){
    system("cls");
    faktorial angka;
    angka.input();
    return 0;
}