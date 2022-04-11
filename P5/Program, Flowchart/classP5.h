#include<iostream>
#include"kasus5.h"
using namespace std;

class banding{
    public:
        int input3(){
            cout<<"Masukkan x : ";
            cin>>x;
            cout<<"Masukkan y : ";
            cin>>y;
            cout<<"Masukkan z : ";
            cin>>z;
            return x, y, z;
        }

        int input2(){
            cout<<"Masukkan x : ";
            cin>>x;
            cout<<"Masukkan y : ";
            cin>>y;
            return x, y;
        }

        void pilihan(){
            cout<<"1. 2 Bilangan\n2. 3 Bilangan\n";
            cout<<"Pilihanmu : ";
            cin>>pilih;
            switch(pilih){
                case 1:
                    input2();
                    cout<<"Nilai terbesar dari 2 bilangan tersebut = "<<maks(x,y);
                    break;
                case 2:
                    input3();
                    cout<<"Nilai terbesar dari 3 bilangan tersebut = "<<maks(x,y,z);
                    break;
                default:
                    cout<<"Pilihan tidak tersedia"<<endl;
            }
        }
    private:
        int x, y, z, pilih;
};

class pangkatsini{
    public:
        int input(){
            cout<<"Masukkan x : ";
            cin>>x;
            cout<<"Masukkan y : ";
            cin>>y;
            return x, y;
        }

        void cetak(){
            input();
            cout<<x<<"^"<<y<<" = "<<pangkat(x,y)<<endl;
        }
    private:
        int x, y;
};

class kali{
    public:
        int input(){
            cout<<"Masukkan a : ";
            cin>>a;
            cout<<"Masukkan b : ";
            cin>>b;
            return a, b;
        }

        void cetak(){
            input();
            cout<<a<<" x "<<b<<" = "<<perkalian(a,b)<<endl;

        }
    private:
        int a, b;

};