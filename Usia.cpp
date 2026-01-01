#include <iostream>

using namespace std;

int main() 
{
    int usia;
    cout << "Masukkan usia";
    cin >> usia;

    if (usia < 13) {
        cout << "Anak anak";
    } else if (usia < 18) {
        cout << "Remaja";
    } else if (usia < 50) {
        cout << "Dewasa";
    } else {
        cout << "Lansia";
    }

    return 0;
}