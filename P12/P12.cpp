#include<iostream>
#include<fstream>
#include<iomanip>
using namespace std;

int main(){
    ifstream bacaFile;
    string simeru[10][10];
    int pilih, baris, kolom;
    bacaFile.open("simeru.txt");
    for(int a=0; a<8; a++){
        for(int b=0; b<9; b++){
            getline(bacaFile, simeru[a][b]);
        }
    }
    bacaFile.close();
	
	for(int a=0; a<8; a++){
		for(int b=0; b<9; b++){
	    	cout<<simeru[a][b]<<"\t";
		}
	 cout<<endl;
	}
	
	cout<<"Yang mau diambil?\n1. Baris\n2. Kolom\nPilih : ";
	cin>>pilih;
	switch(pilih){
		case 1:
			cout<<"Baris berapa? ";
			cin>>baris;
			for(int a=0; a<9; a++){
		        cout<<simeru[baris][a]<<"\t";
		    }
			break;
		case 2:
			cout<<"Kolom berapa? ";
			cin>>kolom;
			for(int a=0; a<8; a++){
		        cout<<simeru[a][kolom]<<endl;
		    }
			break;
	}

    
    return 0;
}
