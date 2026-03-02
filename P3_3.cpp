#include <iostream>
using namespace std;

int panjang, lebar;

void input(){
    cout << "Masukan Panjang : ";
    cin >> panjang;
    cout << "Masukan lebar : ";
    cin >> lebar;
}
int luaspersegi(int a,int b){
    return a * b;
}
int jumlah(int x, int y, int z){
    return x+y+z;
}
void output(){
    cout << "Hasilnya : " << luaspersegi(panjang,lebar) << endl;
}
int main(){
    input();
    output();
    cout << "Hasil dari penjumlahan  : " << jumlah(3,2,7);
}