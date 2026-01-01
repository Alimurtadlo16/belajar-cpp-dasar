#include <iostream>
#include <string>

using namespace std;

typedef struct  {
    int id;
    string judul;
    string penulis;
    int tahunTerbit;
}Buku;

int main(void)
{
    Buku books[100];
    int jumlahBuku = 0;
    cout << "Masukkan jumlah buku yang ingin ditambahkan: ";
    cin >> jumlahBuku;
    cin.ignore();

    for (int i = 0; i < jumlahBuku; i++)
    {
	books[i].id = i;
        cout << "Buku ke-" << i + 1 <<"\n";
        cout << "Judul: ";
        cin.ignore();
        getline(cin, books[i].judul);
        cout << "Penulis: ";
	cin.ignore();
        getline(cin, books[i].penulis);
        cout << "Tahun Terbit: ";
        cin >> books[i].tahunTerbit;
    }

    cout << "\nDaftar Buku di Perpustakaan:\n";
    for (int i = 0; i < jumlahBuku; i++)
    {
        cout << "Judul: " << books[i].judul << "\n";
        cout << "Penulis: " << books[i].penulis << "\n";
        cout << "Tahun Terbit: " << books[i].tahunTerbit << "\n\n";
    }

    return 0;
}
