#include <iostream>
using namespace std;

int main() {
    int angka;
    cout << "Masukkan angka (-1 untuk berhenti):\n";
    while (true) {  
        cout << "> ";
        cin >> angka;
        if (angka == -1) {
            cout << "Program dihentikan.\n";
            break;
        }
        if (angka % 2 == 0) {
            continue;
        }
        if (angka > 0) {
            cout << "Angka ganjil: " << angka << endl;
        }
    }
    return 0;
}