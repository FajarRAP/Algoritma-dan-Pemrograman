#include<iostream>
using namespace std;

int main(){
    string kata;
    int angka, ribu, ratus, puluh, satu;
    cout<<"Masukkan angka : ";
    cin>>angka;
    if(angka>=10000){
        cout<<"Error, angka lebih dari sama dengan 10000"<<endl;
    }else{
        for(int a=10000; a>=1; a/=10){
            if(a==1000){           
                ribu=angka/a;
                if(ribu==0){

                }else{
                    switch(ribu){
                    case 1:
                        kata="Se";
                        break;
                    case 2:
                        kata="Dua";
                        break;
                    case 3:
                        kata="Tiga";
                        break;
                    case 4:
                        kata="Empat";
                        break;
                    case 5:
                        kata="Lima";
                        break;
                    case 6:
                        kata="Enam";
                        break;
                    case 7:
                        kata="Tujuh";
                        break;
                    case 8:
                        kata="Delapan";
                        break;
                    case 9:
                        kata="Sembilan";
                        break;
                }
                    if(ribu==1){
                        cout<<kata<<"ribu ";
                    }else{
                        cout<<kata<<" Ribu ";
                    }
                }
                
                ratus=angka%a;
            }else if(a==100){                        
                ratus/=a;
                if(ratus==0){

                }else{
                    switch(ratus){
                    case 1:
                        kata="Se";
                        break;
                    case 2:
                        kata="Dua";
                        break;
                    case 3:
                        kata="Tiga";
                        break;
                    case 4:
                        kata="Empat";
                        break;
                    case 5:
                        kata="Lima";
                        break;
                    case 6:
                        kata="Enam";
                        break;
                    case 7:
                        kata="Tujuh";
                        break;
                    case 8:
                        kata="Delapan";
                        break;
                    case 9:
                        kata="Sembilan";
                        break;
                }
                    if(ratus==1){
                        cout<<kata<<"ratus ";
                    }else{
                        cout<<kata<<" Ratus ";
                    }
                }
                
                puluh=angka%a;
            }else if(a==10){
                puluh/=a;
                if(puluh==0){

                }else{
                    switch(puluh){
                    case 1:
                        kata="Se";
                        break;
                    case 2:
                        kata="Dua";
                        break;
                    case 3:
                        kata="Tiga";
                        break;
                    case 4:
                        kata="Empat";
                        break;
                    case 5:
                        kata="Lima";
                        break;
                    case 6:
                        kata="Enam";
                        break;
                    case 7:
                        kata="Tujuh";
                        break;
                    case 8:
                        kata="Delapan";
                        break;
                    case 9:
                        kata="Sembilan";
                        break;
                }
                    if(puluh>1){
                        cout<<kata<<" Puluh ";
                    }
                }
                
                satu=angka%a;
            }else if(a==1){
                if(satu==0){
                    cout<<"Sepuluh";
                }else if(puluh==1){
                    switch(satu){
                        case 1:
                            kata="Sebelas";
                            break;
                        case 2:
                            kata="Dua Belas";
                            break;
                        case 3:
                            kata="Tiga Belas";
                            break;
                        case 4:
                            kata="Empat Belas";
                            break;
                        case 5:
                            kata="Lima Belas";
                            break;
                        case 6:
                            kata="Enam Belas";
                            break;
                        case 7:
                            kata="Tujuh Belas";
                            break;
                        case 8:
                            kata="Delapan Belas";
                            break;
                        case 9:
                            kata="Sembilan Belas";
                            break;
                            
                    }
                    cout<<kata;
                }
                else{
                    switch(satu){
                    case 1:
                        kata="Satu";
                        break;
                    case 2:
                        kata="Dua";
                        break;
                    case 3:
                        kata="Tiga";
                        break;
                    case 4:
                        kata="Empat";
                        break;
                    case 5:
                        kata="Lima";
                        break;
                    case 6:
                        kata="Enam";
                        break;
                    case 7:
                        kata="Tujuh";
                        break;
                    case 8:
                        kata="Delapan";
                        break;
                    case 9:
                        kata="Sembilan";
                        break;
                    }
                    cout<<kata<<endl;
                }
            }
        }
    }
    
    return 0;
}