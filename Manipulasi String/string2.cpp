#include<iostream>
#include<string.h>
using namespace std;

int main(){
	system("cls");
	char nama1 [20] = "NN BLOG" ;
	char nama2 [20] = "NN blog" ;

	cout<<"String 1 : "<<nama1<<endl;
	cout<<"String 2 : "<<nama2<<endl;
	cout<<endl<<endl;

	//penggunaan strcoll()

	cout<<"Penggunaan strcoll()"<<endl;
	cout<<"-------------------"<<endl;
	if(strcmp(nama1, nama2) == 0){
		cout<<"Kedua string bernilai sama\n"<<endl;
	}else{
		cout<<"Kedua string bernilai beda\n"<<endl;
	}


	//membandingkan 6 karakter awal strcoll()

	cout<<"Penggunaan strcoll() pada 4 karakter awal"<<endl;
	cout<<"---------------------------------------------------"<<endl;
	if(strncmp(nama1, nama2, 4) == 0){
		cout<<"Kedua string bernilai sama\n"<<endl;
	}else{
		cout<<"Kedua string bernilai beda\n"<<endl;
	}

	//membandingkan 10 karakter awal strcoll()

	cout<<"Penggunaan strcoll() pada 6 karakter awal"<<endl;
	cout<<"------------------------------------------"<<endl ;
	if(strcoll(nama1, nama2) == 0){
		cout<<"Kedua string bernilai sama\n"<<endl;
	}else{
		cout<<"Kedua string bernilai beda\n"<<endl;
	}

	return 0;
}
