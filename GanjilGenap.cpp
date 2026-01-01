#include <iostream>
using namespace std;

int main() {
    char ulang;
    
    cout << "PROGRAM PENENTU BILANGAN GENAP/GANJIL\n";
    cout << "=====================================\n";
    
    do {
        int angka;
        cout << "\nMasukkan sebuah bilangan: ";
        cin >> angka;
        
        if (angka % 2 == 0) {
            cout << angka << " adalah bilangan GENAP\n";
        } else {
            cout << angka << " adalah bilangan GANJIL\n";
        }
        
        cout << "\nCoba lagi? (y/n): ";
        cin >> ulang;
        
    } while (ulang == 'y' || ulang == 'Y');
    
    cout << "\nProgram selesai. Terima kasih!\n";
    return 0;
}
