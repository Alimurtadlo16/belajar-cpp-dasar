#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int JUMLAH_DATA = 10;
    double nilai[JUMLAH_DATA];
    double total = 0.0, rata_rata;
    
    cout << "PROGRAM MENGHITUNG RATA-RATA 10 NILAI\n";
    cout << "=====================================\n\n";
    cout << "Masukkan 10 nilai:\n";
    for(int i = 0; i < JUMLAH_DATA; i++) {
        cout << "Nilai ke-" << i+1 << ": ";
        cin >> nilai[i];
        total += nilai[i];
    }
    rata_rata = total / JUMLAH_DATA;
    cout << fixed << setprecision(2);
    cout << "\nRata-rata dari 10 nilai tersebut adalah: " << rata_rata << endl;
    
    return 0;
}
