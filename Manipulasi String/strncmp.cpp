#include"mstring.h"

class cari{
    public:
        void saring(){
            cout<<"Kata yang awalnya dari B : "<<endl;
            for(int a=0; a<6; a++){
                if(strncmp(nama[a], "B", 1)==0){
                    cout<<nama[a]<<endl;
                }
            }
        }

        void cetak(){
            cout<<"Daftar Nama : "<<endl;
            for(int a=0; a<6; a++){
                cout<<a+1<<". "<<nama[a]<<endl;
            }
            cout<<endl;
            saring();
        }

    private:
        char nama[100][7]={"Ucup", "Akbar", "Otong", "Empud", "Boi", "Brobro"};
        
};

void ascii (char n){
	int a=n;
	cout<<"Kode ASCII dari "<<n<<" = "<<a<<endl;
}

int main(){
    // Mencari string pake char
    //strncmp(char yg akan disearch, huruf yg terkandung dalam char, jumlah char)
    system("cls");
//    cari kata;
//    kata.cetak();
	char nama[][7]={"Ucup", "Akbar", "Otong", "Empud", "Boi", "Brobro"};
	cout<<"Daftar nama : "<<endl;
	for(int a=0; a<6; a++){
		if(char(66)==nama[a]){
			cout<<"titit"<<endl;
		}
	}
    return 0;
}
