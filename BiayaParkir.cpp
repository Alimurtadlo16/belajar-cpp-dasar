#include <iostream>

using namespace std;

int main()
{
    int biaya_parkir_perjam=5000;
    biaya_parkir_perjam += 2000;
    biaya_parkir_perjam *= 2;
    float maksimal=20000;

    cout << "===Biaya perkir perjam===" << endl;
    cout << "Masukkan jam parkir anda (Rp): ";
    cin >> biaya_parkir_perjam;

    maksimal = (biaya_parkir_perjam=5000) += 2000 * (biaya_parkir_perjam *= 2);

    cout << "total biaya parkir anda adalah: " << maksimal  << "Rp" << endl;

    return 0;
}