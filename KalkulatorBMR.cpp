#include<iostream>
using namespace std;

void BMRL ();
void BMRP ();

main()
{
    int pilihan;

    cout << " ============================================= "<<endl;
    cout << " PROGRAM KALKULATOR BMR (BASAL METABOLIC RATE) "<<endl;
    cout << " ============================================= "<<endl;
    a:
    cout << "\n";
    cout << " Silahkan pilih jenis kelamin anda "<<endl;
    cout << " 1. Laki-laki "<<endl;
    cout << " 2. Perempuan "<<endl<<" ";
    cin >> pilihan;

     switch(pilihan)
     {
         case 1 :
            {
                BMRL();
                break;
            }
        case 2 :
            {
                BMRP();
                break;
            }
        default :
            {
                cout << " Pilihan yang Anda masukkan tidak ada. Silahkan Coba Lagi"<<endl;
                goto a;
            }
     }
}


void BMRL()
{
    char nama [30];
    int umur, TB, BB;
    int olahraga;
    float BMR;

    cout << " \n SELAMAT DATANG DI KALKULATOR MENGHITUNG BMR LAKI-LAKI "<<endl;
    cout << " Silahkan isi data di bawah ini! "<<endl;
    cout << " Nama Panggilan : ";
    cin >> nama;
    cout << " Umur : ";
    cin >> umur;
    cout << " Tinggi badan : ";
    cin >> TB;
    cout << " Berat Badan : ";
    cin >> BB;
    cout <<endl;
    cout << " Bagaimana aktifitas kegiatan anda sehari hari ? "<<endl;
    cout << " 1. Sangat ringan (sangat jarang olahraga) "<<endl;
    cout << " 2. Ringan (olahraga 1-3 hari per minggu)"<<endl;
    cout << " 3. Normal (olahraga 3-5 hari per minggu)"<<endl;
    cout << " 4. Berat (olahraga 6-7 hari per minggu)"<<endl;
    cout << " 5. Sangat berat (olahraga 2 kali dalam sehari)"<<endl;
    cout << " Masukkan piliahan : ";
    cin >> olahraga;

    if (olahraga==1){
        BMR = (66 + (13,7*BB) + (5*TB) + (6,8 * umur)) * 1,2;
    }
    else if(olahraga==2){
        BMR = (66 + (13,7*BB) + (5*TB) + (6,8 * umur)) * 1,375;
    }
    else if(olahraga==3){
        BMR = (66 + (13,7*BB) + (5*TB) + (6,8 * umur)) * 1,55;
    }
    else if(olahraga==4){
        BMR = (66 + (13,7*BB) + (5*TB) + (6,8 * umur)) * 1,725;
    }
    else if(olahraga==5){
        BMR = (66 + (13,7*BB) + (5*TB) + (6,8 * umur)) * 1,9;
    }
    cout <<"\n "<< nama << " BMR anda yaitu: " <<BMR<<endl;
}

void BMRP ()
{
    char nama [30];
    int umur, TB, BB;
    int olahraga;
    float BMR;

    cout << " \n SELAMAT DATANG DI KALKULATOR MENGHITUNG BMR PEREMPUAN "<<endl;
    cout << " Silahkan isi data di bawah ini! "<<endl;
    cout << " Nama Panggilan : ";
    cin >> nama;
    cout << " Umur : ";
    cin >> umur;
    cout << " Tinggi badan : ";
    cin >> TB;
    cout << " Berat Badan : ";
    cin >> BB;
    cout <<endl;
    cout << " Bagaimana aktifitas kegiatan anda sehari hari ? "<<endl;
    cout << " 1. Sangat ringan (sangat jarang olahraga) "<<endl;
    cout << " 2. Ringan (olahraga 1-3 hari per minggu)"<<endl;
    cout << " 3. Normal (olahraga 3-5 hari per minggu)"<<endl;
    cout << " 4. Berat (olahraga 6-7 hari per minggu)"<<endl;
    cout << " 5. Sangat berat (olahraga 2 kali dalam sehari)"<<endl;
    cout << " Masukkan piliahan : ";
    cin >> olahraga;

    if (olahraga==1){
        BMR = (655 + (9,6 *BB) + (1,8*TB) + (4,7 * umur)) * 1,2;
    }
    if (olahraga==2){
        BMR = (655 + (9,6 *BB) + (1,8*TB) + (4,7 * umur)) * 1,375;
    }
    if (olahraga==3){
        BMR = (655 + (9,6 *BB) + (1,8*TB) + (4,7 * umur)) * 1,55;
    }
    if (olahraga==4){
        BMR = (655 + (9,6 *BB) + (1,8*TB) + (4,7 * umur)) * 1,725;
    }
    if (olahraga==5){
        BMR = (655 + (9,6 *BB) + (1,8*TB) + (4,7 * umur)) * 1,9;
    }
    cout <<"\n "<< nama << " BMR anda yaitu: " <<BMR<<endl;
}
