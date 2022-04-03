#include<iostream>
using namespace std;

class kuadrat{
    public:
        int pangkat=1;
        float negatif=1, x, y;
        string titit;

        int input(){
            cout<<"Masukkan angka   : ";
            cin>>x;
            cout<<"Masukkan pangkat : ";
            cin>>y;
            return x, y;
        } 

        void cetak(){
            if(y<0){
                y*=-1;
                for(int a=1; a<=y; a++){
                    pangkat*=x;
                }
                negatif/=pangkat;
                titit="1/";
                cout<<x<<"^-"<<y<<"\t= "<<titit<<pangkat<<endl;
                cout<<"\t= "<<negatif<<endl;
            }else{
                for(int a=1; a<=y; a++){
                    pangkat*=x;
                }
                cout<<x<<"^"<<y<<" = "<<pangkat<<endl;
            }
            
        }
};

int main(){
    system("cls");
    kuadrat angka;
    angka.input();
    angka.cetak();
    return 0;
}