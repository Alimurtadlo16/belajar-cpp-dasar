#include <iostream>
using namespace std;

int main() {
    int baris;
    cout << "Masukkan jumlah baris: ";
    cin >> baris;

    for (int i = baris; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}