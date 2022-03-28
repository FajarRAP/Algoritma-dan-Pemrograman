#include<iostream>
using namespace std;

class banding{
    friend istream& operator>>(istream&, banding&);
    public:
        banding(){};
        void bandingkan(){
            if(a>b){
                cout<<"Bilangan terbesar adalah A = "<<a<<endl;
            }else{
                cout<<"Bilangan terbesar adalah B = "<<b<<endl;
            }
        }
    private:
        int a, b;
};