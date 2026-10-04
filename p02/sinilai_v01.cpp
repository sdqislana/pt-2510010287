// SiNilai v0.1: data satu mahasiswa.
#include <iostream>
#include <string>

using namespace std;

int main() {
    // TODO 1: Deklarasi variabel Nama dan NPM (bertipe string)
    string nama;
    string npm;
    
    // Tambahan Latihan Mandiri D.1: Tambahkan data Semester
    int semester = 0;

    // TODO 2: Deklarasi empat variabel nilai bertipe double
    double kehadiran = 0.0;
    double mingguan = 0.0;
    double uts = 0.0;
    double uas = 0.0;

    cout << "=== SiNilai v0.1 ===\n";

    // TODO 3: Baca nama (menggunakan getline karena bisa mengandung spasi)
    cout << "Nama        : ";
    getline(cin, nama);

    // TODO 4: Baca NPM
    cout << "NPM         : ";
    cin >> npm;

    // Pembacaan data tambahan
    cout << "Semester    : ";
    cin >> semester;

    // TODO 5: Baca keempat komponen nilai satu per satu
    cout << "Kehadiran   : ";
    cin >> kehadiran;
    cout << "Mingguan    : ";
    cin >> mingguan;
    cout << "UTS         : ";
    cin >> uts;
    cout << "UAS         : ";
    cin >> uas;

    // TODO 6: Tampilkan semua data dalam bentuk Kartu Data Mahasiswa
    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama        : " << nama << "\n";
    cout << "NPM         : " << npm << "\n";
    cout << "Semester    : " << semester << "\n";
    cout << "Kehadiran   : " << kehadiran << "\n";
    cout << "Mingguan    : " << mingguan << "\n";
    cout << "UTS         : " << uts << "\n";
    cout << "UAS         : " << uas << "\n";

    return 0;
}