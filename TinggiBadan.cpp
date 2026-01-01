#include <iostream>
#include <string>

using namespace std;

int main() {
    int jumlahSiswa;
    cout << "Masukkan jumlah siswa: ";
    cin >> jumlahSiswa;

    string namaSiswa[jumlahSiswa];
    float tinggiSiswa[jumlahSiswa];
    for (int i = 0; i < jumlahSiswa; i++) {
        cout << "Masukkan nama siswa ke-" << (i + 1) << ": ";
        cin >> namaSiswa[i];
        cout << "Masukkan tinggi badan (dalam cm) siswa ke-" << (i + 1) << ": ";
        cin >> tinggiSiswa[i];
    }
    float tinggiTertinggi = tinggiSiswa[0];
    string namaTertinggi = namaSiswa[0];
    for (int i = 1; i < jumlahSiswa; i++) {
        if (tinggiSiswa[i] > tinggiTertinggi) {
            tinggiTertinggi = tinggiSiswa[i];
            namaTertinggi = namaSiswa[i];
        }
    }
    cout << "Siswa dengan tinggi badan tertinggi adalah: " << namaTertinggi 
         << " dengan tinggi " << tinggiTertinggi << " cm." << endl;
    return 0;
}
