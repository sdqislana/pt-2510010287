# P05 Perulangan: for, while, do-while

Folder kode Pertemuan 5 Pemrograman Terstruktur. Setiap program punya flowchart pasangannya
di modul (Gambar 1 sampai 5); perhatikan panah yang kembali ke atas, itulah perulangan.

## Isi

| Berkas | Kegunaan |
|---|---|
| `for_hitung.cpp` | for dengan jumlah putaran yang diketahui; coba ubah `<=` menjadi `<` |
| `for_jumlah.cpp` | Pola akumulator: total dan rata-rata dari n nilai; coba masukkan 0 |
| `while_sentinel.cpp` | while dengan angka negatif sebagai tanda berhenti; jumlah putaran tidak diketahui |
| `do_while_menu.cpp` | do-while untuk menu yang diulang sampai pengguna memilih keluar; switch dari Pertemuan 4 |
| `sinilai_v04_awal.cpp` | Starter SiNilai v0.4: badan v0.3 sudah ada, lengkapi do-while, for, akumulator, dan rekap |
| `contoh_masukan.txt` | Tiga mahasiswa untuk menguji v0.4 |
| `.vscode/`, `.gitignore` | Sama dengan pertemuan sebelumnya |

## Kasus uji SiNilai v0.4 (`./sinilai_v04 < contoh_masukan.txt`)

| Mahasiswa | Komponen | Nilai akhir | Huruf | Status |
|---|---|---|---|---|
| Siti Aminah | 100, 85.5, 78, 80 | 83.975 | A | Lulus |
| Budi Santoso | 80, 70, 65, 60 | 67.75 | C+ | Lulus |
| Rina Wati | 60, 50, 40, 55 | 49.5 | D | Belum lulus |

Rekap kelas: 3 mahasiswa, 2 lulus, 1 belum lulus, rata-rata kelas 67.075.
Jumlah mahasiswa 0 atau negatif harus ditanya ulang (do-while).

## Kalau program berputar tanpa henti

Tekan `Ctrl+C` di terminal. Penyebab yang paling sering: lupa langkah (`i++`), syarat yang tidak
pernah salah, atau mengetik huruf saat program meminta angka (`cin` gagal dan nilai variabelnya
menjadi 0; obatnya dibahas di Pertemuan 7).

## Yang dikumpulkan mahasiswa

Folder `p05` di repository `pt-NPM` berisi `sinilai_v04.cpp`. Lihat Modul Pertemuan 5 bagian E.

## Deklarasi AI

Tuliskan AI yang digunakan, prompt, dan umpan balik AI
saya menggunakan gemini ai untuk membantu saya dalam meletakan do-while dan for,

| prompt saya | hasil AI |
| --- | --- |
|   apakah posisi do while, for saya sudah betul | Ya, posisi do-while dan for yang kamu buat sudah betul. Berikut adalah alasan mengapa posisi tersebut sudah benar:Posisi do-while untuk jumlah_mahasiswa (TODO 1):Diletakkan di awal sebelum perulangan utama untuk memastikan bahwa program menanyakan jumlah mahasiswa paling sedikit satu kali.Kondisi while (jumlah_mahasiswa < 1); memastikan jika pengguna menginput angka 0 atau negatif, program akan mengulang pertanyaan tersebut sampai pengguna memasukkan angka yang sah ($\ge 1$).Posisi Deklarasi Akumulator (TODO 2):Variabel total_nilai dan jumlah_lulus dideklarasikan di luar (sebelum) perulangan for.Ini sangat penting agar nilai dari akumulator tidak tereset kembali menjadi 0 setiap kali perulangan mahasiswa berganti.Posisi Perulangan for (TODO 3 & 4):Perulangan for (int i = 1; i <= jumlah_mahasiswa; i++) membungkus seluruh proses input dan perhitungan dari mahasiswa pertama hingga mahasiswa terakhir (jumlah_mahasiswa).Di akhir badan perulangan for, penambahan nilai (total_nilai += nilai_akhir;) dan pengecekan kelulusan (jumlah_lulus++) dieksekusi dengan tepat di setiap putarannya sebelum lanjut ke mahasiswa berikutnya atau mencetak rekap di luar perulangan.   |