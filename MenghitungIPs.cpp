#include<iostream>
using namespace std;

void nilai();

main()
{
    char nama[100];
    long int NIM;
    long int ips;

    cout << " ========================================================== "<<endl;
    cout << " PROGRAM MENGHITUNG INDEKS PRESTASI SEMESTER PRODI SI UNNES "<<endl;
    cout << " ========================================================== "<<endl;
    cout << "\n";

    cout << " Nama : ";
    cin >> nama;
    nilai();
}


void nilai ()
{
    int bing, so, kommas;
    int alel, pengamen, alpro;
    int pti, pai, bindo;
    float ips;

    cout << " Bahasa Inggris 2 SKS; point : ";
    cin >> bing;
    cout << " Sistem Operasi 3 SKS; point : ";
    cin >> so;
    cout << " Komputer dan masyarakat 3 SKS; point : ";
    cin >> kommas;
    cout << " Aljabar Linear ELementer 2 SKS; point : ";
    cin >>alel;
    cout << " Pengantar manajemen 2 SKS; point : ";
    cin >> pengamen;
    cout << " Algoritma pemograman dan struktur data 4 SKS; point : ";
    cin >> alpro;
    cout << " Pengantar teknologi informasi 2 SKS; point : ";\
    cin >> pti;
    cout << " Pendidikan Agama Islam 2 SKS; point : ";
    cin >> pai;
    cout << " Bahasa Indonesia 2 SKS; point : ";
    cin >> bindo;

    ips = ((2*bing)+(3*so)+(3*kommas)+(2*alel)+(2*pengamen)+(4*alpro)+(2*pti)+(2*pai)+(2*bindo))/22;

    cout << " Indeks Prestasi semester anda yaitu: "<<ips<<endl;
}

