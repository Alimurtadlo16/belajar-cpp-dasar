#include <iostream>
using namespace std;

void inputNilai(double &tugas, double &uts, double &uas) {
    cout << "Masukkan nilai Tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;
}
double hitungRataRata(double tugas, double uts, double uas) {
    return (tugas + uts + uas) / 3; 
}
char konversiNilai(double rataRata) {
    if (rataRata >= 85) {
        return 'A';
    } else if (rataRata >= 70) {
        return 'B';
    } else if (rataRata >= 55) {
        return 'C';
    } else if (rataRata >= 40) {
        return 'D';
    } else {
        return 'E';
    }
}
void tampilkanHasil(double tugas, double uts, double uas, double rataRata, char hurufMutu) {
    cout << "\nHasil Penilaian Mahasiswa:\n";
    cout << "Nilai Tugas: " << tugas << endl;
    cout << "Nilai UTS: " << uts << endl;
    cout << "Nilai UAS: " << uas << endl;
    cout << "Rata-rata: " << rataRata << endl;
    cout << "Huruf Mutu: " << hurufMutu << endl;
}
int main() {
    double tugas, uts, uas;
    inputNilai(tugas, uts, uas);
    double rataRata = hitungRataRata(tugas, uts, uas);
    char hurufMutu = konversiNilai(rataRata);
    tampilkanHasil(tugas, uts, uas, rataRata, hurufMutu);
    return 0;
}