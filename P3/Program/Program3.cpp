#include<iostream>
#include<math.h>
using namespace std;

int main(){
    float a, b, c, disk, x1, x2, x1s, x2s;
    
    cout<<"Nilai A : ";
    cin>>a;
    cout<<"Nilai B : ";
    cin>>b;
    cout<<"Nilai C : ";
    cin>>c;

    disk=(pow(b,2))-(4*a*c);
    if(a==0){
        cout<<"Bukan persamaan kuadrat"<<endl;
        cout<<"Harga akar = "<<-c/b<<endl;
    }else{
        if(disk==0){
            x1=(-(b))/(2*a);
            x2=x1;
            cout<<"Diskriminan = "<<disk<<endl;
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }else if(disk>0){
            x1=((-(b))+sqrt(disk))/(2*a);
            x2=((-(b))-sqrt(disk))/(2*a);
            cout<<"Diskriminan = "<<disk<<endl;
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }else{
            cout<<"Akar Imajiner"<<endl;
        }
    }
    return 0;
}