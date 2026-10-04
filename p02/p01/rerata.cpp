#include <iostream>
#include <iomanip> // Diperlukan untuk std::setprecision

int main() { // Fungsi utama program C++ yang akan dieksekusi pertama kali
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    int kuis = 88;
    int kehadiran = 85;
    // diatas ini adalah variabel-variabel yang akan di hitunga

    // TODO 1:menghitung kelima variabel 
    int jumlah = tugas + uts + uas + kuis + kehadiran;

    // TODO 2: Hitung rata-rata
    //menggunakan pembagi '5.0', agar C++ melakukan pembagian desimal, bukan pembagian bulat
    double rerata = jumlah / 5.0;

    // TODO 3: Cetak hasil dengan 2 angka di belakang koma
    std::cout << "Jumlah    : " << jumlah << "\n"; // mencetak teks jumlah
    std::cout << std::fixed << std::setprecision(2); // mengunci format angka agar selalu menampilkan 2 digit dibelakang koma
    std::cout << "Rata-rata : " << rerata << "\n"; // mencetak teks rata-rata /n untuk ganti baris

    return 0; //tanda bahwa program selesai, mengenbalikan nilai 0 ke sistem operasi
} //penutup fungsi main