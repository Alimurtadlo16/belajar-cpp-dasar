#include <iostream>
using namespace std;

int main() {
    int tahun;

    cout << "PROGRAM MENENTUKAN TAHUN KABISAT\n";
    cout << "=================================\n\n";
    cout << "Masukkan tahun: ";
    cin >> tahun;

    if ((tahun % 4 == 0 && tahun % 100 != 0) || (tahun % 400 == 0)) {
        cout << tahun << " adalah tahun KABISAT." << endl;
    } else {
        cout << tahun << " adalah tahun BUKAN KABISAT." << endl;
    }

    return 0;
}
