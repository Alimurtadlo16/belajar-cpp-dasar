#include <iostream>

using namespace std;

int main()
{
    int tinggi_badan;
    float berat_ideal;

    cout << "===Program Menghitung Berat Badan Ideal===" << endl;
    cout << "Masukkan Tinggi Badan Anda (cm): ";
    cin >> tinggi_badan;

    berat_ideal = (tinggi_badan-100) - 0.10 * (tinggi_badan-100);

    cout << "Berat badan ideal anda adalah: " << berat_ideal << "kg" << endl;

    return 0;
}