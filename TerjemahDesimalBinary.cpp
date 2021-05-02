#include<iostream>
using namespace std;

int RealtoBinary(int n);

main()
{
    int a;

    cout << " ================================================= "<<endl;
    cout << " PROGRAM MENERJEMAHKAN BILANGAN REAL MENUJU BINARY "<<endl;
    cout << " ================================================= "<<endl;

    cout << "\n Bilangan Real : ";
    cin >>  a;

    cout << "\n Translasi ke Binary : ";
    cout << RealtoBinary(a)<<endl;

    return 0;
}

int RealtoBinary(int n)
{
    int hasil =0;
    int digitakhir;
    int x =1;
    while(x<=n)
        x*= 2;
    x /=2;

    while(x>0){
        digitakhir = n/x;
        n -= digitakhir * x;
        x /= 2;
        hasil = hasil*10 + digitakhir;
    }
    return hasil;
}
