#include <iostream>
using namespace std;

int p, l;

void input(){
    cout << "Masukan Panjang : ";
    cin >> p;
    cout << "Masukan Lebar ; ";
    cin >> l;
}
int LuasPersegi(){
    return p * l;
}
void output(){
    cout << "Hasilnya : " << LuasPersegi();
}