//Saya cinta wahyu

#include<iostream>
using namespace std;

struct Mahasiswa{
    int nim;
    Mahasiswa *next;
};

class Node{
    private:
        Mahasiswa *kepala, *ekor, *elemenSekarang, *nodeBaru, *hapusElemen;
        int nimMhs, jmlElemen=0;
    public:
        friend istream& operator>>(istream &in, Node &gas){
            cout<<"Masukkan NIM : ";
            in>>gas.nimMhs;
            return in;
        }
        friend ostream& operator<<(ostream &out, Node &gas){
            gas.bikinKepalaNode(gas.nimMhs);
            gas.cetakNodeDanNgitungElemen();
            return out;
        }
        void bikinKepalaNode(int nimMhs){
            kepala=new Mahasiswa;
            kepala->nim=nimMhs;
            kepala->next=NULL;
            ekor=kepala;
        }

        void bikinNodeAwal(int nimMhs){
            nodeBaru=new Mahasiswa;
            nodeBaru->nim=nimMhs;
            nodeBaru->next=kepala;
            kepala=nodeBaru;
        }

        void bikinNodeAkhir(int nimMhs){
            nodeBaru=new Mahasiswa;
            nodeBaru->nim=nimMhs;
            nodeBaru->next=NULL;
            ekor->next=nodeBaru;
            ekor=nodeBaru;
        }

        void hapusAwal(){
            hapusElemen=kepala;
            kepala=kepala->next;
            delete hapusElemen;
        }

        void hapusAkhir(){
            hapusElemen=ekor;
            elemenSekarang=kepala;
            while(elemenSekarang->next!=ekor){
                elemenSekarang=elemenSekarang->next;
            }
            ekor=elemenSekarang;
            ekor->next=NULL;
            delete hapusElemen;
        }

        void editAwal(int nimMhs){
            kepala->nim=nimMhs;
        }

        void editAkhir(int nimMhs){
            ekor->nim=nimMhs;
        }

        void cetakNodeDanNgitungElemen(){
            elemenSekarang=kepala;
            while(elemenSekarang!=NULL){
                cout<<"NIM : "<<elemenSekarang->nim<<endl;
                elemenSekarang=elemenSekarang->next;
                jmlElemen++;
            }
        }
};



int main(){
    system("cls");
    int jmlElemen=0;
    Node titit;
    cin>>titit;
    cout<<titit;
    // bikinKepalaNode(180);
    // bikinNodeAwal(124);
    // bikinNodeAwal(173);
    // bikinNodeAkhir(143);
    // hapusAwal();
    // hapusAkhir();
    // editAwal(199);
    // editAkhir(209);
    // cetakNode();
    return 0;
}
