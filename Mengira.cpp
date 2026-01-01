#include <iostream>
using namespace std;
int main() {
    int angka;
    while (angka<1 || angka>10) {
        cout << "Masukkan angka 1-10 : ";
        cin >> angka;
    }
    cout << "Angka sudah valid !!!" << endl;
    return 0;
}