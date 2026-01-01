#include <iostream>
#include <string>

using namespace std;

int main() {

    //1.Menampilkan Judul Program
    cout <<"=========================" << endl;
    cout <<" PROGRAM INFORMASI BUKU " << endl;
    cout <<"=========================" << endl;

    //2.Meminta pengguna memasukkan informasi buku
    string judul, penulis, penerbit;
    int tahun;

    cout << "\nMasukkan informasi buku:" << endl;

    cout << "judul: ";
    getline(cin, judul);//menggunakan getline untuk membaca string yang mungkin mengandung spasi

    cout << "penulis: ";
    getline(cin, penulis);

    cout << "penerbit: ";
    getline(cin, penerbit);

    cout << "tahun: ";
    cin >> tahun;

    //Menampilkan informasi buku dalam format yang rapi
    cout << judul << endl;
    cout << penulis << endl;
    cout << penerbit << endl;
    cout << tahun << endl;

    return 0;
}