#include <iostream>
#include <windows.h>
using namespace std;

int main(){
	int pilih;
	char kondisi;
	cout<<"Apakah anda ingin reboot ke recovery? (y/n) ";
	cin>>kondisi;
	if(kondisi=='y'){
		for(int a=1; a<=3; a++){
			cout<<".";
			Sleep(1000);
		}
		recovery:
		cout<<endl<<"Team Win Recovery Project"<<endl;
		cout<<"1. Flash ROM\n2. Wipe\n3. Format Data\n4. Reboot System"<<endl;
		cin>>pilih;
		switch(pilih){
			case 1:
				cout<<"Sedang mencari ROM di Internal Storage"<<endl;
				for(int a=1; a<=3; a++){
					cout<<".";
					Sleep(1000);
				}
				cout<<endl<<"ROM ditemukan"<<endl;
				cout<<"Flash ROM? (y/n) ";
				cin>>kondisi;
				if(kondisi=='y'){
					for(int a=1; a<=5; a++){
						cout<<".";
						Sleep(1000);
					}
					cout<<endl<<"Flash ROM Sukses"<<endl<<endl;
					goto recovery;
				}else{
					goto recovery;
				}
				break;
			case 2:
				cout<<"Anda akan Wipe Data, Metadata, dan Cache"<<endl;
				cout<<"Warning!!"<<endl;
				cout<<"1. Jika anda belum flash rom dan wipe begitu saja";
				cout<<", maka OS anda akan hilang"<<endl;
				cout<<"2. Jika anda sudah flash rom maka wipe lah agar tidak bootloop"<<endl;
				cout<<"Anda yakin? (y/n) ";
				cin>>kondisi;
				if(kondisi=='y'){
					for(int a=1; a<=3; a++){
						cout<<".";
						Sleep(1000);
					}
					cout<<endl<<"Wipe sukses"<<endl<<endl;
					goto recovery;
				}else{
					goto recovery;						
				}
				
				break;
			case 3:
				cout<<"Anda akan Format Data"<<endl;
				cout<<"Warning!!"<<endl;
				cout<<"1. Ini akan menghapus Internal Storage anda"<<endl;
				cout<<"2. Jika anda sudah flash rom maka Format Data lah agar tidak bootloop"<<endl;
				cout<<"Anda yakin? (y/n) ";
				cin>>kondisi;
				if(kondisi=='y'){
					for(int a=1; a<=3; a++){
						cout<<".";
						Sleep(1000);
					}
				}
					cout<<endl<<"Format Data sukses"<<endl<<endl;
					goto recovery;
			case 4:
				cout<<"Rebooting ";
					for(int a=1; a<=3; a++){
						cout<<".";
						Sleep(1000);
					}
				break;
			default:
				cout<<"Pilihan tidak tersedia"<<endl;
		}
	}else{
		cout<<"Anda tetap di homescreen"<<endl;
	}
	return 0;
}