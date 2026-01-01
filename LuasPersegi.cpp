#include <iostream>

using namespace std;

int main(void)
{
    double panjang = 25.0; 
    double lebar = 15.0;
    
    double luas_lapangan = panjang * lebar;
    double luas_setengah_lapangan = luas_lapangan / 2.0;

    cout << "Luas lapangan sepak bola: " << luas_lapangan << "Meter persegi" <<endl;
    cout << "Luas setengah lapangan sepak bola: " << luas_setengah_lapangan << "Meter persegi" << endl;
    return 0;
}