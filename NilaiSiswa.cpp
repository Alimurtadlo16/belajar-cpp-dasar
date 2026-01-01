#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    const int JUMLAH_SISWA = 30;
    double nilaiSiswa[JUMLAH_SISWA];
    double totalNilai = 0;
    cout << "Masukkan nilai ujian matematika 30 siswa:" << endl;
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        cout << "Nilai siswa ke-" << (i + 1) << ": ";
        cin >> nilaiSiswa[i];
        while (nilaiSiswa[i] < 0 || nilaiSiswa[i] > 100) {
            cout << "Nilai harus antara 0-100. Masukkan kembali: ";
            cin >> nilaiSiswa[i];
        }
        
        totalNilai += nilaiSiswa[i];
    }
    double rataRata = totalNilai / JUMLAH_SISWA;
    double nilaiTertinggi = *max_element(nilaiSiswa, nilaiSiswa + JUMLAH_SISWA);
    double nilaiTerendah = *min_element(nilaiSiswa, nilaiSiswa + JUMLAH_SISWA);
    int siswaDibawahRata = 0;
    for (int i = 0; i < JUMLAH_SISWA; i++) {
        if (nilaiSiswa[i] < rataRata) {
            siswaDibawahRata++;
        }
    }
    cout << "\nHasil Rekap Nilai:" << endl;
    cout << "------------------" << endl;
    cout << "Rata-rata kelas: " << rataRata << endl;
    cout << "Nilai tertinggi: " << nilaiTertinggi << endl;
    cout << "Nilai terendah: " << nilaiTerendah << endl;
    cout << "Jumlah siswa di bawah rata-rata: " << siswaDibawahRata << endl;
    return 0;
}
