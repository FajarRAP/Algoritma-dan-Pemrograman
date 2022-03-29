#include<iostream>
#include<math.h>
using namespace std;

class kuadrat{
    public:
        float a, b, c, x1, x2;

        float inputangka(){
            cout<<"Nilai A : ";
            cin>>a;
            cout<<"Nilai B : ";
            cin>>b;
            cout<<"Nilai C : ";
            cin>>c;
            return a, b, c;
        }

        float rumusdisk(){
            return pow(b,2)-(4*a*c);
        }
        void tampilhasil(){
            if(a==0){
                cout<<"Bukan persamaan kuadrat"<<endl;
                cout<<"Harga akarnya = "<<-c*b<<endl;
            }else{
                if(rumusdisk()==0){
                    x1=(-(b))/(2*a);
                    x2=x1;
                    cout<<"x1 = "<<x1<<endl;
                    cout<<"x2 = "<<x2<<endl;
                }else if(rumusdisk()>0){
                    x1=((-(b))+sqrt(rumusdisk()))/(2*a);
                    x2=((-(b))-sqrt(rumusdisk()))/(2*a);
                    cout<<"x1 = "<<x1<<endl;
                    cout<<"x2 = "<<x2<<endl;
                }else{
                    cout<<"Akar Imaginer"<<endl;
                }
            }
        }
};

int main(){
    kuadrat pers;
    pers.inputangka();
    pers.rumusdisk();
    pers.tampilhasil();
    return 0;
}