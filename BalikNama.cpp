#include <iostream>

using namespace std;

int main()
{
    string nama;
    int jumlah=0;
    cout<<"ketikan nama anda = ";
    getline(cin,nama);
    cout<<"jumlah huruf = "<<nama.length()<<endl;
    cout<<"nama saya jika dibaca terbalik = ";
    for(int i=nama.length();i>=0;i--){
        cout<<nama[i];
    }
    cout<<endl;
    for(int i=nama.length();i>=0;i--){
        char huruf=tolower(nama[i]);
        if(huruf=='a' || huruf=='i' || huruf=='u' || huruf=='e' || huruf=='o'){
            jumlah++;
        }
    }
    cout<<"jumlah huruf vokal = "<<jumlah;
    return 0;
}
