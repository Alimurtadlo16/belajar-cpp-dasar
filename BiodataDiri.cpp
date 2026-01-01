#include <iostream>
#include <string>

using namespace std;

int main() {
    // 1. Menampilkan judul program
    cout << "=======" << endl;
    cout << "BIODATA" << endl;
    cout << "=======" << endl;

    //2. Meminta pengguna memasukkan biodata
    string nama, mahasiswa;
    int nim; 
    int telphone;
    cin >> telphone;
    int umur;
    cin >> umur;

    cout << "\nMasukkan biodata:" << endl;

    cout << "Nama: ";
    getline(cin, nama);

    cout << "Mahasiswa: ";
    getline(cin, mahasiswa);

    cout << "Nim: ";
    (cin >> nim);

    cout << "No.Telphone: ";
    (cin, telphone);
    
    cout << "Umur: ";
    (cin, umur);
    
    // 3. Menampilkan biodata dalam format yang rapi
    cout << nama << endl;
    cout << mahasiswa << endl;
    cout << nim << endl;
    cout << umur << endl;
    cout << telphone << endl;

    return 0;
}