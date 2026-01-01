#include <iostream>
using namespace std;

int main() {
    cout << "PROGRAM MENGHITUNG URUTAN ANGKA\n";
    cout << "===============================\n\n";

    int i = 1; 
    do {
        if (i % 5 == 0) {
            cout << i << " adalah kelipatan 5." << endl;
        } else {
            cout << i << endl;
        }
        i++; 
    } while (i <= 20); 
    return 0;
}
