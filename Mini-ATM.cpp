#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;

struct nasabah {
    char nama[50];
    char alamat[30];
    long int norek;
    double saldo;
};

//deklarasi prosedur yang digunakan
void pilihan1();
void pilihan2();
void pilihan3();
void pilihan4();
void pilihan5();


//deklarasi variabel global
int n=0;
nasabah nas[50];
int i, pilihan, x, pos;
long int no;
double setor, tarik;
bool ketemu=false;

int main()
{
    menu:
    system("cls");
    cout << "\n\t\t\t\t\t\t     SELAMAT DATANG PADA MENU UTAMA BANK TAJIR SYARIAH      "<<endl;
    cout << " \t\t\t\t\t\t              Teller : Nur Afan Syarifudin                   "<<endl;
    cout << endl;
    cout << " \t\t\t\t\t\t============================================================"<<endl;
    cout << " \t\t\t\t\t\t|                    BANK TAJIR SYARIAH                    |"<<endl;
    cout << " \t\t\t\t\t\t|     ~Kesuksesan Anda Adalah Berkah Bagi Orang Lain~      |"<<endl;
    cout << " \t\t\t\t\t\t============================================================"<<endl;
    cout << " \t\t\t\t\t\t|                        MENU UTAMA                        |"<<endl;
    cout << " \t\t\t\t\t\t============================================================"<<endl;
    cout << " \t\t\t\t\t\t|         1. Pendaftaran Nasabah                           |"<<endl;
    cout << " \t\t\t\t\t\t|         2. Penyetoran Tunai                              |"<<endl;
    cout << " \t\t\t\t\t\t|         3. Penarikan Tunai                               |"<<endl;
    cout << " \t\t\t\t\t\t|         4. Cetak Daftar Nasabah                          |"<<endl;
    cout << " \t\t\t\t\t\t|         5. Cari Nasabah                                  |"<<endl;
    cout << " \t\t\t\t\t\t|         6. Keluar                                        |"<<endl;
    cout << " \t\t\t\t\t\t|                                                          |"<<endl;
    cout << " \t\t\t\t\t\t============================================================"<<endl;
    cout << " \t\t\t\t\t\tPilihan: ";
    cin >> pilihan;
    if (pilihan==1){
        pilihan1();                     //pemanggilan prosedur
        goto menu;
    }
    else if (pilihan==2){
        pilihan2();                     //pemanggilan prosedur
        goto menu;

    }
    else if (pilihan==3){
        pilihan3();                     //pemanggilan prosedur
        goto menu;

    }
    else if (pilihan==4){
        pilihan4();                     //pemanggilan prosedur
        goto menu;
    }
    else if (pilihan==5){
        pilihan5();                     //pemanggilan prosedur
        goto menu;
    }
    return 0;
}

void pilihan1()
{
    cout <<endl;
    cout << " \t\t\t============================================================"<<endl;
    cout << " \t\t\tMasukkan No. Rekening: ";
    cin >> no;
    for (i=0;i<n;i++){
        if (no==nas[i].norek)
            ketemu=true;
        else
            ketemu=false;
    }
    if (ketemu){
    cout << " \t\t\tNomor Rekening Tersebut Sudah Terdaftar. Silahkan Ulangi Lagi!"<<endl;
    }
    else {
        cout << " \t\t\t============================================================"<<endl;
        cout << " \t\t\tMasukan Nama Nasabah   : "; cin >> nas[n].nama;
        cout << " \t\t\tMasukan Alamat Nasabah : "; cin >> nas[n].alamat;
        cout << " \t\t\tMasukan Saldo Awal     : Rp. "; cin >> nas[n].saldo;
    }
    n=n+1;
    nas[i].norek=no;
    cout << " \t\t\t============================================================"<<endl;
    cout << " \t\t\tTekan Angka 0 untuk kembali ke Halaman Menu Utama "; cin >> x;
}

void pilihan2()
{
    cout <<endl;
    cout << " \t\t\t============================================================"<<endl;
    cout << " \t\t\tMasukkan No. Rekening :";
    cin >> no;
    for (i=0; i<n; i++){
        if (no==(nas[i].norek)){
            pos=i;
            ketemu=true;
            break;
        }
        else
            ketemu=false;
        }

    if (ketemu){
        cout << " \t\t\t============================================================"<<endl;
        cout << " \t\t\tMasukan Nominal Penyetoran : Rp."; cin >> setor;
        nas[pos].saldo=nas[pos].saldo+setor;
        cout << " \t\t\tPenyetoran Berhasil "<<endl;
        cout << " \t\t\tJumlah Saldo Anda Rp."<<nas[pos].saldo<<endl;
        cout << endl;
    }
    else
        cout << " \t\t\tNomor Rekening Tidak Ditemukan!"<<endl;
        cout << " \t\t\tTekan Angka 0 untuk kembali ke Halaman Menu Utama "; cin >> x;
}

void pilihan3()
{
    cout <<endl;
    cout << " \t\t\t============================================================"<<endl;
    cout << " \t\t\tMasukkan No. Rekening :";
    cin >> no;
    for (i=0; i<n; i++){
        if (no==nas[i].norek){
            pos=i;
            ketemu=true;
            break;
        }
        else
            ketemu=false;
    }
    if (ketemu){
        cout << " \t\t\t============================================================"<<endl;
        cout << " \t\t\tMasukan Jumlah Penarikan Rp."; cin >> tarik;
        if (tarik<nas[pos].saldo){
            nas[pos].saldo=nas[pos].saldo-tarik;
            cout << " \t\t\tSisa saldo Rp." << nas[pos].saldo <<endl;
            cout <<endl;
        }
        else
            cout << " \t\t\tMohon Maaf Saldo Tidak Mencukupi Untuk Melakukan Transaksi ini"<<endl;
    }
    else
        cout << " \t\t\tNomor Rekening Tidak Ditemukan!"<<endl;
        cout << " \t\t\tTekan Angka 0 untuk kembali ke Halaman Menu Utama "; cin >> x;
}

void pilihan4()
{
    cout <<endl;
    cout << "|=========================================================================|"<<endl;
    cout << "|                   DAFTAR NASABAH BANK TAJIR SYARIAH                     |"<<endl;
    cout << "|=====|===================|==============|==============|=================|"<<endl;
    cout << "|  No |    No Rekening    |   Nama       |    Alamat    |    Total Saldo  |"<<endl;
    cout << "|=====|===================|==============|==============|=================|"<<endl;
    for(i=0; i<n; i++){
        cout<<setw(4)<<i+1;;
        cout<<setw(16)<<nas[i].norek;
        cout<<setw(13)<<nas[i].nama;
        cout<<setw(16)<<nas[i].alamat;
        cout<<setw(18)<<((nas[i].saldo)+(nas[i].saldo*0.2))<<endl;
    }

    cout << "|=====|===================|==============|==============|=================|"<<endl;
    cout <<endl;
    cout << " Jumlah Saldo di atas Setelah ditambah Bunga sebesar 20%"<<endl;
    cout << " Tekan Angka 0 untuk kembali ke Halaman Menu Utama "; cin >> x;
}

void pilihan5()
{
    cout <<endl;
    cout << " \t\t\t============================================================"<<endl;
    cout << " \t\t\tMasukkan No. Rekening Yang akan Dicari: "; cin >> no;
    cout << endl;
    for (i=0; i<n; i++){
        if (no==nas[i].norek){
            pos=i;
            ketemu=true;
            break;
        }
        else
            ketemu=false;
    }
    if (ketemu){
        cout << " \t\t\tNomor Rekening           : "<< nas[pos].norek<<endl;
        cout << " \t\t\tNama Nasabah             : "<< nas[pos].nama<<endl;
        cout << " \t\t\tAlamat                   : "<< nas[pos].alamat<<endl;
        cout << " \t\t\tSaldo                    : "<< nas[pos].saldo<<endl;
        cout << " \t\t\tTotal Saldo + Bunga 20%  : Rp."<<((nas[i].saldo)+(nas[i].saldo*0,2))<<endl<<endl;
    }
    else
        cout << " \t\t\tNomor Rekening Tidak Ditemukan!"<<endl;
        cout << " \t\t\tTekan Angka 0 untuk kembali ke Halaman Menu Utama "; cin >> x;
}

