#include <iostream>

using namespace std;

void tampilkanSegitiga(int t)
{
    for (int baris = t; baris >= 1; baris--) 
    {
        for (int kolom = 1; kolom <= baris; kolom++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main(void)
{
    int tinggi;

    cout << "Masukkan tinggi segitiga: " << endl;
    cin >> tinggi;

    tampilkanSegitiga(tinggi); 
    return 0;
}