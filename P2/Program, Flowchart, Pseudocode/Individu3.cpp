#include <iostream>
using namespace std;

int main(){
	int matriks[2][2], determinan;
	for(int a=0; a<2; a++){
		for(int b=0; b<2; b++){
			cout<<"Masukkan angka : ";
			cin>>matriks[a][b];
		}
	}
	cout<<endl;
	for(int a=0; a<2; a++){
		cout<<"|";
		for(int b=0; b<2; b++){
			cout<<" "<<matriks[a][b]<<" ";
		}
		cout<<"|"<<endl;
	}
	cout<<endl;
	determinan=matriks[0][0]*matriks[1][1]-matriks[0][1]*matriks[1][0];
	cout<<"Determinan dari matriks = "<<determinan<<endl;
	return 0;
}
