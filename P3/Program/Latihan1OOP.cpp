#include<iostream>
#include<math.h>
using namespace std;

class kuadrat{
    public:
        float a, b, c, disk, x1, x2;

        float inputangka(){
            cout<<"Nilai A : ";
            cin>>a;
            cout<<"Nilai B : ";
            cin>>b;
            cout<<"Nilai C : ";
            cin>>c;
            return a, b, c;
        }

        float diskriminan(){
            return pow(b,2)-(4*a*c);
        }

        float akardiskriminan(){
            return sqrt(diskriminan());
        }

        void hitung_akar1(){
            x1=-b/(2*a);
            x2=x1;
            cout<<"Diskriminan "<<diskriminan()<<endl;
            cout<<"X1 = "<<x1<<endl;
            cout<<"X2 = "<<x2<<endl;
        }

        void hitung_akar2(){
            x1=(-b+akardiskriminan())/(a*a);
            x2=(-b-akardiskriminan())/(a*a);
            cout<<"Diskriminan "<<diskriminan()<<endl;
            cout<<"X1 = "<<x1<<endl;
            cout<<"X2 = "<<x2<<endl;
        }

        void output(){
            if(diskriminan()<0){
                cout<<"Akar Imajiner"<<endl;
            }else if(diskriminan()==0){
                hitung_akar1();
            }else if(diskriminan()>0){
                hitung_akar2();
            }
        }
};

int main(){
    kuadrat persamaan;
    persamaan.inputangka();
    persamaan.diskriminan();
    persamaan.output();
    return 0;
}