#include<iostream>
#include<string.h>
using namespace std;

class cari{
	public:
		void input(){
			cout<<"Masukkan kalimat : ";
			gets(kalimat);
		}

		void hitung(){
			input();
			for(int a=0; a<strlen(kalimat); a++){
				strtonum=kalimat[a];
				ascii=strtonum;
				if(ascii==66){
					total++;
				}else if(ascii==98){
					hasil++;
				}
			}
		}

		void cetak(){
			hitung();
			if(total==0 && hasil==0){
				cout<<"Pada kalimat "<<kalimat<<" tidak terdapat karakter B dan b"<<endl;
			}else if(total>0 && hasil==0){
				cout<<"Pada kalimat "<<kalimat<<" terdapat "<<total<<" karakter B"<<endl;
			}else if(total==0 && hasil>0){
				cout<<"Pada kalimat "<<kalimat<<" terdapat "<<hasil<<" karakter b"<<endl;
			}else{
				cout<<"Pada kalimat "<<kalimat<<" terdapat "<<hasil<<" karakter b dan "<<total<<" karakter B"<<endl;
			}
		}

	private:
		char kalimat[100], strtonum;
		int ascii, total=0, hasil=0;
};

int main(){
	system("cls");
	cout<<"Mencari karakter B dan b dalam kalimat"<<endl;
	cari huruf;
	huruf.cetak();
	return 0;
}
