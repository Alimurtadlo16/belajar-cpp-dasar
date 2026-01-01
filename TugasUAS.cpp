#include <iostream>
#include <string>
#include <map>
#include <limits>
using namespace std;
class Mahasiswa {
public:
    string namaLengkap;
    string nim;
    int semester;
    string prodi;
    int keluarCount;
    string tujuan;
    string alasan;
    string waktuKeluar;

    Mahasiswa(string nama, string nim, int sem, string program, string tujuan, string alasan, string waktu) 
        : namaLengkap(nama), nim(nim), semester(sem), prodi(program), tujuan(tujuan), alasan(alasan), keluarCount(1), waktuKeluar(waktu) {}
    void tampilData() const {
        cout << "\n==========Data Mahasiswa=========="
             << "\nNama			: " << namaLengkap
             << "\nNIM			: " << nim
             << "\nSemester		: " << semester
             << "\nProdi			: " << prodi
             << "\nTujuan			: " << tujuan
             << "\nAlasan			: " << alasan
             << "\nKeluar			: " << keluarCount << " kali"
             << "\nWaktu Keluar		: " << waktuKeluar << "\n";
    }
    void catatKeluar() {
        keluarCount++;
    }
};
int main() {
    map<string, Mahasiswa> mahasiswaMap;
    int pilihan;
    cout << "=======SISTEM PENCATATAN KELUAR MASUK MAHASISWA========\n";
    while(true) {
        cout << "\nMenu:"
             << "\n1. Catat Keluar Mahasiswa"
             << "\n2. Lihat Data"
             << "\n3. Kembali ke Kampus"
             << "\n4. Exit"
             << "\nPilih: ";
        if(!(cin >> pilihan)) {
            cout << "Input tidak valid!";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            continue;
        }
        switch(pilihan) {
            case 1: {
                string nama, nim, prodi, tujuan, alasan, waktu;
                int semester;
                cout << "\n**********+++++Masukkan Data Mahasiswa+++++**********";
                cout << "\nNama Lengkap			: ";
                cin.ignore();
                getline(cin, nama);
                cout << "NIM				: ";
                getline(cin, nim);
                cout << "Semester			: ";
                while(!(cin >> semester)) {
                    cout << "Input salah! Masukkan angka: ";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                cout << "Program Studi			: ";
                cin.ignore();
                getline(cin, prodi);
                cout << "Tujuan Keluar			: ";
                getline(cin, tujuan);
                cout << "Alasan Keluar			: ";
                getline(cin, alasan);
                cout << "Waktu Keluar (contoh pagi)	: ";
                getline(cin, waktu);
                auto it = mahasiswaMap.find(nim);
                if (it != mahasiswaMap.end()) {
                    it->second.catatKeluar();
                    it->second.waktuKeluar = waktu;
                    cout << "Data berhasil disimpan!\n";
                } else {
                    mahasiswaMap.insert({nim, Mahasiswa(nama, nim, semester, prodi, tujuan, alasan, waktu)});
                    cout << "========Data berhasil disimpan========\n";
                }
                if (waktu == "pagi") {
                    cout << "Peringatan: Harus kembali sebelum dzuhur (12:00).\n";
                } else if (waktu == "siang" || waktu == "sore" || waktu == "malam") {
                    cout << "Peringatan: Harus kembali sebelum jam 10 malam (22:00).\n";
                }
                break;
            }
            
            case 2: {
                if(mahasiswaMap.empty()) {
                    cout << "\nBelum ada data mahasiswa!\n";
                } else {
                    cout << "\nDaftar Mahasiswa:\n";
                    for(const auto& pair : mahasiswaMap) {
                        pair.second.tampilData();
                    }
                }
                break;
            }
            
            case 3: {
                string nim;
                cout << "\nMasukkan NIM Mahasiswa yang kembali: ";
                cin.ignore();
                getline(cin, nim);
                auto it = mahasiswaMap.find(nim);
                if(it != mahasiswaMap.end()) {
                    cout << "Mahasiswa " << it->second.namaLengkap << " telah kembali ke kampus.\n";
                } else {
                    cout << "NIM tidak ditemukan!\n";
                }
                break;
            }
            
            case 4:
                cout << "Program selesai.\n";
                return 0;
            default:
                cout << "Pilihan tidak valid!\n";
        }
    }
}