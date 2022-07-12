#include<iostream>
using namespace std;

struct Node{
    int angka;
    Node *berikutnya;
};

Node *kepala, *ekor, *sekarang, *baru, *hapus, *bantu;

void tambahPertamaKali(int angka){
    kepala=new Node;
    kepala->angka=angka;
    kepala->berikutnya=NULL;
    ekor=kepala;
}

void tambahAwal(int angka){
    baru=new Node;
    baru->angka=angka;
    baru->berikutnya=kepala;
    kepala=baru;
}

void tambahTengah(int angka, int posisi){
    baru=new Node;
    baru->angka=angka;
    sekarang=kepala;
    int elemenKe=1;
    while(elemenKe < posisi-1){
        sekarang=sekarang->berikutnya;
        elemenKe++;
    }
    baru->berikutnya=sekarang->berikutnya;
    sekarang->berikutnya=baru;
}

void tambahAkhir(int angka){
    baru=new Node;
    baru->angka=angka;
    baru->berikutnya=NULL;
    ekor->berikutnya=baru;
    ekor=baru;
}

void hapusDepan(){
    hapus=kepala;
    kepala=kepala->berikutnya;
    delete hapus;
}

void hapusTengah(int posisi){
    int elemenKe=1;
    sekarang=kepala;
    while(elemenKe<=posisi){
        if(elemenKe==posisi-1){
            bantu=sekarang;
        }else if(elemenKe==posisi){
            hapus=sekarang;
        }
        sekarang=sekarang->berikutnya;
        elemenKe++;
    }
    bantu->berikutnya=sekarang;
    delete hapus;
}

void hapusBelakang(){
    hapus=ekor;
    sekarang=kepala;
    while(sekarang->berikutnya!=ekor){
        sekarang=sekarang->berikutnya;
    }
    ekor=sekarang;
    ekor->berikutnya=NULL;
    delete hapus;
}

void cetak(){
    sekarang=kepala;
    while(sekarang!=NULL){
        cout<<sekarang->angka<<" ";
        sekarang=sekarang->berikutnya;
    }

}

int main(){
    system("cls");
    int pilih, angka, posisi;
    while(pilih!=7){
        cout<<"0. Tambah Pertama Kali\n1. Tambah Awal\t2. Tambah Tengah\t3. Tambah Akhir\n4. Hapus Awal\t5. Hapus Tengah\t\t6. Hapus Akhir\n7. Cetak\nPilih : ";
        cin>>pilih;
        switch(pilih){
            case 0:
                cout<<"Angka  : ";
                cin>>angka;
                tambahPertamaKali(angka);
                break;
            case 1:
                cout<<"Angka  : ";
                cin>>angka;
                tambahAwal(angka);
                break;
            case 2:
                cout<<"Angka  : ";
                cin>>angka;
                cout<<"Posisi : ";
                cin>>posisi;
                tambahTengah(angka, posisi);
                break;
            case 3:
                cout<<"Angka  : ";
                cin>>angka;
                tambahAkhir(angka);
                break;
            case 4:            
                hapusDepan();
                break;
            case 5:
                cout<<"Posisi : ";
                cin>>posisi;
                hapusTengah(posisi);
                break;
            case 6:
                hapusBelakang();
                break;
            case 7:
                cetak();
                break;
            default:
                cout<<"Pilihan tidak tersedia"<<endl;
        }
    }
    return 0;
}