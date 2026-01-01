#include <iostream>
#include <iomanip>
using namespace std;

int hitungTotalHarga(int harga, int jumlah) {
    return harga * jumlah; 
}

double diskon(int totalHarga) {
    if (totalHarga > 100000) {
        return totalHarga * 0.9; 
    }
    return totalHarga; 
}

void tampilkanNota(int harga, int jumlah, double totalSetelahDiskon) {
    double totalSebelumDiskon = hitungTotalHarga(harga, jumlah);
    cout << fixed << setprecision(2); 
    cout << "Nota Pembelian:\n";
    cout << "Harga per Buku: Rp " << harga << endl;
    cout << "Jumlah Buku: " << jumlah << endl;
    cout << "Total Sebelum Diskon: Rp " << totalSebelumDiskon << endl;
    cout << "Total Setelah Diskon: Rp " << totalSetelahDiskon << endl;
}

int main() {
    int harga, jumlah;

    cout << "Masukkan harga per buku: Rp ";
    cin >> harga;
    cout << "Masukkan jumlah buku: ";
    cin >> jumlah;

    int totalHarga = hitungTotalHarga(harga, jumlah);

    double totalSetelahDiskon = diskon(totalHarga);

    tampilkanNota(harga, jumlah, totalSetelahDiskon);
    return 0;
}