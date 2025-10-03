#include <iostream>
using namespace std;

int main() {
    // Deklarasi variabel ke tipe data float()
    float alas, tinggi, luas;

    cout << "Program Menghitung Luas Segitiga" << endl;
    cout << "Masukkan alas : ";
    cin >> alas;
    cout << "Masukkan tinggi : ";
    cin >> tinggi;

    // Proses Menghitung dengan Rumus luas segitiga = (alas * tinggi) / 2
    luas = (alas * tinggi) / 2;

    cout << "Luas segitiga adalah: " << luas << endl;

    // menandakan program selesai dengan normal
    return 0;
}