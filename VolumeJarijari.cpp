#include <iostream>
#include <cmath>
using namespace std;
double luas_bola(double jariJari) {
    return 4 * M_PI * pow(jariJari, 2);
}
double volume_bola(double jariJari) {
    return (4.0 / 3.0) * M_PI * pow(jariJari, 3);
}
int main()
{
    double jariJari;
    cout << "Masukkan jari - jari bola: ";
    cin >> jariJari;

    if (jariJari < 0) {
        cout << "Jari - jari tidak boleh negatif" << endl;
        return 1;
    }
    double luas = luas_bola(jariJari);
    double volume = volume_bola(jariJari);

    cout << "Luas permukaan bola: " << luas << "Meter persegi" << endl;
    cout << "Volume bola: " << volume << "Meter kubik" << endl;
    return 0;
}