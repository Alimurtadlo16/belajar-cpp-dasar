#include <iostream>
using namespace std;

int main() {
    double bilangan;

    cout << "PROGRAM MENENTUKAN BILANGAN POSITIF/NEGATIF\n";
    cout << "===========================================\n\n";
    cout << "Masukkan sebuah bilangan: ";
    cin >> bilangan;

    if (bilangan > 0) {
        cout << bilangan << " adalah bilangan POSITIF";
    } 
    else if (bilangan < 0) {
        cout << bilangan << " adalah bilangan NEGATIF";
    }
    else {
        cout << bilangan << " adalah NOL";
    }
    return 0;
}
