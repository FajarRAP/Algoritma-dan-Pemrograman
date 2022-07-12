#include <fstream>
#include <iomanip>
#include <iostream>
using namespace std;

class KTP {
private:
  struct tanggal {
    string tempat;
    int tgl, bln, thn;
  };

  struct alamat {
    string jln, kcmtn, ds;
    int rt, rw;
  };

  string nama, nik;
  int pilih;
  string berlaku = "Seumur Hidup";
  string pekerjaan;
  string tampung[100];
  tanggal data;
  alamat dataAlamat;

public:
  friend istream &operator>>(istream &masuk, KTP &dimas) {
    while (dimas.nik.length() != 16) {
      cout << "NIK : ";
      masuk >> dimas.nik;
      if (dimas.nik.length() != 16) {
        cout << "NIK tidak valid. Silakan input lagi." << endl;
      }
    }
    cout << endl;
    cout << "Nama : ";
    masuk >> dimas.nama;
    cout << endl;
    cout << "Data Kelahiran" << endl;
    cout << "Tempat  : ";
    masuk >> dimas.data.tempat;
    while (dimas.data.tgl < 1 || dimas.data.tgl > 31) {
      cout << "Tanggal : ";
      masuk >> dimas.data.tgl;
      if(dimas.data.tgl < 1 || dimas.data.tgl > 31){
        cout<<"Tanggal tidak valid"<<endl;
      }
    }
    while (dimas.data.bln < 1 || dimas.data.bln > 12) {
      cout << "Bulan   : ";
      masuk >> dimas.data.bln;
      if(dimas.data.bln < 1 || dimas.data.bln > 31){
        cout<<"Bulan tidak valid"<<endl;
      }
    }
    cout << "Tahun   : ";
    masuk >> dimas.data.thn;
    cout << endl;
    cout << "Jenis Kelamin : \n1. Laki-laki\n2. Perempuan\nPilih : ";
    masuk >> dimas.pilih;
    switch (dimas.pilih) {
    case 1:
      dimas.tampung[0] = "Laki-laki";
      break;
    case 2:
      dimas.tampung[0] = "Perempuan";
      break;
    }
    cout << endl;
    cout << "Golongan Darah : \n1. A\n2. B\n3. AB\n4. O\nPilih : ";
    masuk >> dimas.pilih;
    switch (dimas.pilih) {
    case 1:
      dimas.tampung[4] = "A";
      break;
    case 2:
      dimas.tampung[4] = "B";
      break;
    case 3:
      dimas.tampung[4] = "AB";
      break;
    case 4:
      dimas.tampung[4] = "O";
      break;
    }
    cout << endl;
    cout << "Alamat :\nJalan : ";
    masuk >> dimas.dataAlamat.jln;
    cout << "RT : ";
    masuk >> dimas.dataAlamat.rt;
    cout << "RW : ";
    masuk >> dimas.dataAlamat.rw;
    cout << "Kel/Desa : ";
    masuk >> dimas.dataAlamat.ds;
    cout << "Kecamatan : ";
    masuk >> dimas.dataAlamat.kcmtn;
    cout << endl;
    cout << "Agama : \n1. Buddha\n2. Kristen\n3. Hindu\n4. Islam\n5. "
            "Katolik\nPilih : ";
    masuk >> dimas.pilih;
    switch (dimas.pilih) {
    case 1:
      dimas.tampung[1] = "Buddha";
      break;
    case 2:
      dimas.tampung[1] = "Kristen";
      break;
    case 3:
      dimas.tampung[1] = "Hindu";
      break;
    case 4:
      dimas.tampung[1] = "Islam";
      break;
    case 5:
      dimas.tampung[1] = "Katolik";
      break;
    }
    cout << endl;
    cout << "Status Kawin : \n1. Kawin \n2. Belum Kawin\nPilih : ";
    masuk >> dimas.pilih;
    switch (dimas.pilih) {
    case 1:
      dimas.tampung[2] = "Kawin";
      break;
    case 2:
      dimas.tampung[2] = "Belum Kawin";
    }
    cout << endl;
    cout << "Pekerjaan : ";
    masuk >> dimas.pekerjaan;
    cout << endl;
    cout << "Warga Negara : \n1. WNI\n2. WNA\nPilih : ";
    masuk >> dimas.pilih;
    switch (dimas.pilih) {
    case 1:
      dimas.tampung[3] = "WNI";
      break;
    case 2:
      dimas.tampung[3] = "WNA";
      break;
    }
    return masuk;
  }
  friend ostream &operator<<(ostream &keluar, KTP &kelas) {
    ofstream tulisFile;
    tulisFile.open("dataFix.txt");
    tulisFile << "NIK " << setw(16) << ": " << kelas.nik << endl;
    tulisFile << "Nama " << setw(15) << ": " << kelas.nama << endl;
    tulisFile << "Tempat/Tgl Lahir  " << setw(2) << ": " << kelas.data.tempat
              << " " << kelas.data.tgl << "-" << kelas.data.bln << "-"
              << kelas.data.thn << setw(20)
              << "Gol. Darah : " << kelas.tampung[4] << endl;
    tulisFile << "Jenis Kelamin " << setw(6) << ": " << kelas.tampung[0]
              << endl;
    tulisFile << "Alamat " << setw(13) << ": " << kelas.dataAlamat.jln << endl;
    tulisFile << "\tRT/RW " << setw(10) << ": " << kelas.dataAlamat.rt << "/"
              << kelas.dataAlamat.rw << endl;
    tulisFile << "\tKel/Desa " << setw(7) << ": " << kelas.dataAlamat.ds
              << endl;
    tulisFile << "\tKecamatan " << setw(6) << ": " << kelas.dataAlamat.kcmtn
              << endl;
    tulisFile << "Agama " << setw(14) << ": " << kelas.tampung[1] << endl;
    tulisFile << "Status Perkawinan " << setw(2) << ": " << kelas.tampung[2]
              << endl;
    tulisFile << "Pekerjaan " << setw(10) << ": " << kelas.pekerjaan << endl;
    tulisFile << "Kewarganegaraan " << setw(4) << ": " << kelas.tampung[3]
              << endl;
    tulisFile << "Berlaku hingga " << setw(5) << ": " << kelas.berlaku << endl;
    tulisFile.close();
    return keluar;
  }
};

int main() {
  KTP run;
  cin >> run;
  cout << run;
}