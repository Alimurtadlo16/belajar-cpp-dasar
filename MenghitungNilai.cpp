#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int JUMLAH_SISWA = 30;
    double nilai[JUMLAH_SISWA];
    double total = 0, rata_rata;
    double tertinggi, terendah;
    int siswa_dibawah_rata = 0;
    cout << "Masukkan nilai 30 siswa:\n";
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << "Siswa " << i+1 << ": ";
        cin >> nilai[i];
        total += nilai[i]; 

        if (i == 0) {
            tertinggi = nilai[i];
            terendah = nilai[i];
        }
    }
    rata_rata = total / JUMLAH_SISWA;
    for (int i = 1; i < JUMLAH_SISWA; i++) {
        if (nilai[i] > tertinggi) {
            tertinggi = nilai[i];
        }
        if (nilai[i] < terendah) {
            terendah = nilai[i];
        }
    }
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        if (nilai[i] < rata_rata) {
            siswa_dibawah_rata++;
        }
    }

    cout << fixed << setprecision(1);
    cout << "\nHasil Rekap Nilai:\n";
    cout << "Nilai Rata-rata: " << rata_rata << endl;
    cout << "Nilai Tertinggi: " << tertinggi << endl;
    cout << "Nilai Terendah: " << terendah << endl;
    cout << "Jumlah Siswa di bawah Rata-rata: " << siswa_dibawah_rata << endl;

    return 0;
}