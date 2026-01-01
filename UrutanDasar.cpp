#include <iostream>
using namespace std;

int main() {
    cout << "PROGRAM MENGHITUNG URUTAN ANGKA\n";
    cout << "===============================\n\n";
    for (int i = 1; i <= 20; i++) {
        if (i % 5 == 0) {
            cout << i << " adalah kelipatan 5." << endl;
        } else {
            cout << i << endl;
        }
    }
    return 0;
}
