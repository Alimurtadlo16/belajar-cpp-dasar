#include <iostream>
#include <cmath>
using namespace std;

int main() {
    const double PI = 3.141592653589793;
    double jari_jari, volume, luas_permukaan;
    
    cout << "PROGRAM MENGHITUNG VOLUME DAN LUAS PERMUKAAN BOLA\n";
    cout << "=================================================\n\n";
    cout << "Masukkan jari-jari bola: ";
    cin >> jari_jari;
    
    volume = (4.0 / 3.0) * PI * pow(jari_jari, 3);
    luas_permukaan = 4 * PI * pow(jari_jari, 2);
    
    cout << "\nHasil Perhitungan:\n";
    cout << "-----------------\n";
    cout << "Volume bola: " << volume << endl;
    cout << "Luas permukaan bola: " << luas_permukaan << endl;
    
    return 0;
}
