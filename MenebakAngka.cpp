#include <iostream>
using namespace std;

int main() {
    int angka; 
    do {
        cout << "Masukkan angka positif: ";
        cin >> angka;

        if (angka < 0) {
            cout << "Input tidak valid! Silakan masukkan angka positif." << endl;
        }
    } while (angka < 0); 

    cout << "Anda memasukkan angka positif: " << angka << endl;

    return 0; 
}