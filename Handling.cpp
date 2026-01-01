#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    const int jumlahBarang = 5;
    string namaBarang;
    int harga;

    ofstream fileOut("barang.txt");
    cout << "Masukkan data 5 barang:\n";
    for (int i = 0; i < jumlahBarang; i++) {
        cout << "Nama barang ke-" << (i + 1) << ": ";
        getline(cin, namaBarang);
        cout << "Harga barang ke-" << (i + 1) << ": ";
        cin >> harga;
        cin.ignore();
        fileOut << namaBarang << ";" << harga << endl;
    }
    fileOut.close();

    ifstream fileIn("barang.txt");
    int total = 0;
    cout << "\nDaftar Barang:\n";
    cout << left << setw(20) << "Nama Barang" << setw(5) << "Harga\n";
    cout <<"----------------------------------\n";

    while (getline(fileIn, namaBarang, ';') && fileIn >> harga) {
        fileIn.ignore();
        cout << left << setw(20) << namaBarang << "Rp " << setw(7) << harga << endl;
        total += harga;
    }
    fileIn.close();

    cout << "----------------------------------\n";
    cout << left << setw(20) << "Total Harga" << "Rp " << total << endl;

    return 0;
}
