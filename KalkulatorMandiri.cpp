#include <iostream>
using namespace std;

int main() {
    double num1, num2, hasil;
    char operasi;
    char lanjut;
    
    do {
        cout << "\nKALKULATOR SEDERHANA\n";
        cout << "====================\n";
        cout << "1. Penjumlahan (+)\n";
        cout << "2. Pengurangan (-)\n";
        cout << "3. Perkalian (*)\n";
        cout << "4. Pembagian (/)\n";
        cout << "5. Keluar\n";
        cout << "Pilih operasi (1-5): ";
        cin >> operasi;
        
        if(operasi == '5') {
            cout << "Terima kasih telah menggunakan kalkulator ini.\n";
            break;
        }
        
        cout << "Masukkan bilangan pertama: ";
        cin >> num1;
        cout << "Masukkan bilangan kedua: ";
        cin >> num2;
        
        switch(operasi) {
            case '1':
                hasil = num1 + num2;
                cout << "Hasil: " << num1 << " + " << num2 << " = " << hasil << endl;
                break;
            case '2':
                hasil = num1 - num2;
                cout << "Hasil: " << num1 << " - " << num2 << " = " << hasil << endl;
                break;
            case '3':
                hasil = num1 * num2;
                cout << "Hasil: " << num1 << " * " << num2 << " = " << hasil << endl;
                break;
            case '4':
                if(num2 != 0) {
                    hasil = num1 / num2;
                    cout << "Hasil: " << num1 << " / " << num2 << " = " << hasil << endl;
                } else {
                    cout << "Error: Pembagian dengan nol tidak diperbolehkan!\n";
                }
                break;
            default:
                cout << "Operasi tidak valid!\n";
        }
        cout << "\nLanjutkan? (y/n): ";
        cin >> lanjut;
        
    } while(lanjut == 'y' || lanjut == 'Y');
    
    return 0;
}
