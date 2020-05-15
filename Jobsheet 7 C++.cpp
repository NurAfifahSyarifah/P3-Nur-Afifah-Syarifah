#include <iostream>
using namespace std;

int LuasPersegi (int p, int l){
    int luas;
    luas = p*l;
    return luas;
}

int main()
{
    int a,b;
    cout << endl;
    cout << "Menghitung Luas Persegi" << endl;
    cout << endl;
    cout << "Masukkan panjang   : "; cin >> a;
    cout << "Masukkan lebar     : "; cin >> b;
    cout << endl;
    cout << "Luas Persegi       : " << LuasPersegi(a,b);
    cout << endl;
    return 0;
}
