#include <iostream>
using namespace std;
int main() {
    char bersih;
    do{
        cout << "Anak menggosok gigi" << endl;
        cout << "Apakah sudah bersih? (y/n)" ;
        cin >> bersih;
    } while (bersih == 'n');
    cout << "Anak diperbolehkan tidur" << endl;
    return 0;
}