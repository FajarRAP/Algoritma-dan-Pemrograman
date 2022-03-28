#include <iostream>
using namespace std;

int main(){
	int angka, sementara, ratus, puluh, satu;
	cout<<"Masukkan angka < 1000 : ";
	cin>>angka;
	if(angka>=1000){
		cout<<"Error, anda memasukkan angka >= 1000"<<endl;
	}else{
		ratus=angka/100;
		sementara=angka%100;
		puluh=sementara/10;
		angka=sementara;
		sementara=angka%10;
		satu=sementara/1;
		cout<<ratus<<" Ratusan + "<<puluh<<" Puluhan + "<<satu<<" Satuan";

	}
	return 0;
}
