//Program Mengecek Triple Pytagoras

#include<iostream>
using namespace std;

bool check(int x, int y, int z);

int main()
{
    cout << " ================================================ "<<endl;
    cout << " PROGRAM MENGECEK SUATU BILANGAN TRIPLE PYTAGORAS "<<endl;
    cout << " ================================================ "<<endl;
    cout << "\n";

    int a, b, c;
    cout << " a : ";
    cin >> a;
    cout << " b : ";
    cin >> b;
    cout << " c : ";
    cin >> c;

    cout <<"\n"<<" "<< a <<", "<< b <<", "<< c << " adalah ";

    if (check(a, b, c))
        cout <<" Bilangan Triple Pytagoras";
    else
        cout <<" Bukan Bilangan Triple Pytagoras";

    cout <<endl;

    return 0;
}

bool check(int x, int y, int z){
    int a= max(x, max(y,z));
    int b,c;
if (a==x){
    b=y;
    c=z;
}
else if (a==y){
    b=x;
    c=z;
}
else {
    b=x;
    c=y;
}
if ((a*a)==(b*b)+(c*c))
    return true;
else
    return false;
}
