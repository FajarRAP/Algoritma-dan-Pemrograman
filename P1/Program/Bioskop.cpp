#include <iostream>
using namespace std;

int main(){
	int pilih;
	cout<<"Pemesanan Tiket Bioskop"<<endl;
	cout<<"1. Online\n2. Offline"<<endl;
	cout<<"Pilihanmu (1/2): ";
	cin>>pilih;
	switch(pilih){
		case 1:
		cout<<"1. Jakarta vs Everybody\n2. Jujutsu Kaisen 0"<<endl;
		cout<<"Pilihanmu : ";
		cin>>pilih;
		if(pilih==1||pilih==2){
				for(int a=1; a<6; a++){
					for(int b=1; b<=6; b++){
						if(a==1){
							cout<<"E"<<b<<"  ";
						}else if (a==2){
							cout<<"D"<<b<<"  ";
						}else if (a==3){
							cout<<"C"<<b<<"  ";
						}else if (a==4){
							cout<<"B"<<b<<"  ";
						}else{
							cout<<"A"<<b<<"  ";
						}
					}
				cout<<endl;
				}
		}else{
			cout<<"Pilihan tidak tersedia"<<endl;
		}
		break;
		case 2:
		cout<<"Silakan datang ke bioskop terdekat dari rumah anda"<<endl;
		cout<<"Nanti akan dipandu hingga duduk di studio"<<endl;
		break;
		default:
			cout<<"Pilihan tidak tersedia"<<endl;
	}
	return 0;
}