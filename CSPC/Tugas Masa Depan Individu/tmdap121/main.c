/*
Saya [Villeneuve Andhira Suwandhi] NIM [2108067] mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library:
#include "header.h"

// Kumpulan pola angka-angka:
/*
keterangan:
nilai 0 = kosong.
nilai 1 = isi.
nilai 2 = (khusus angka 1 dan 3) tidak isi.
nilai 3 = (khusus angka 2 dan 5) tidak isi.
*/
int Q[10][5][3] = {
    {{0, 1, 0},
     {1, 0, 1},
     {1, 0, 1},
     {1, 0, 1},
     {0, 1, 0}},  // angka 0

    {{1, 2, 2},
     {1, 2, 2},
     {1, 2, 2},
     {1, 2, 2},
     {1, 2, 2}},  // angka 1

    {{0, 1, 0},
     {0, 0, 1},
     {0, 1, 0},
     {1, 3, 0},
     {0, 1, 0}},  // angka 2

    {{2, 1, 0},
     {2, 0, 1},
     {2, 1, 0},
     {2, 0, 1},
     {2, 1, 0}},  // angka 3

    {{1, 0, 1},
     {1, 0, 1},
     {0, 1, 0},
     {0, 0, 1},
     {0, 0, 1}},  // angka 4

    {{0, 1, 0},
     {1, 3, 0},
     {0, 1, 0},
     {0, 0, 1},
     {0, 1, 0}},  // angka 5

    {{0, 1, 0},
     {1, 3, 0},
     {0, 1, 0},
     {1, 0, 1},
     {0, 1, 0}},  // angka 6

    {{1, 1, 0},
     {0, 0, 1},
     {0, 0, 1},
     {0, 0, 1},
     {0, 0, 1}},  // angka 7

    {{0, 1, 0},
     {1, 0, 1},
     {0, 1, 0},
     {1, 0, 1},
     {0, 1, 0}},  // angka 8

    {{0, 1, 0},
     {1, 0, 1},
     {0, 1, 0},
     {0, 0, 1},
     {0, 1, 0}},  // angka 9
};

// Program yang menerima input berupa sebuah string untuk dienkripsi menjadi sandi berdasarkan angka ASCII dari setiap karakter di dalam string:
int main() {
    // Deklarasi:
    char str[255];  // string yang dienkripsi.
    int n;          // ketebalan.

    // Input (masukkan):
    scanf("%s", &str);  // masukkan string A-Z atau a-z.
    scanf("%d", &n);    // masukkan selalu bilangan bulat.

    // enkripsi:
    /*
    Angka 65-90 adalah ASCII dari huruf A-Z
    Angka 97-122 adalah ASCII dari huruf a-z
    */
    int arr[255][255];                       // kumpulan array dua dimensi hasil enkripsi dari string ke angka ASCII.
    int total = 0;                           // untuk menampung jumlah total huruf yang akan dienkripsi.
    int indeks = 0;                          // untuk menampung jumlah digit ASCII per huruf.
    for (int i = 0; i < strlen(str); i++) {  // mengakses looping sebanyak huruf dalam masukkan string.
        int num = (int)str[i];               // mengubah huruf dalam array menjadi angka sesuai tabel ASCII.
        indeks = 0;                          // reset indeks setiap berganti digit ASCII per huruf.
        while (num >= 9) {                   // looping untuk memisahkan angka ASCII.
            int mod = num % 10;              // memisahkan angka paling belakang dengan cara sisa bagi.
            num /= 10;                       // setelah itu mengambil angka selanjutnya dengan dibagi kelipatan 10.
            arr[total][indeks] = mod;        // menyimpan angka ASCII yang sudah dipisah (sisa bagi) ke dalam array.
            indeks++;                        // iterasi (bertambah satu, setiap kali akan berganti digit).
        }
        if (num != 0) {                // syarat jika setelah dibagi kelipatan 10 merupakan bilangan selain 0.
            arr[total][indeks] = num;  // menyimpan angka ASCII yang sudah dipisah (kelipatan 10) ke dalam array.
            indeks++;                  // iterasi (bertambah satu, setiap kali akan berganti digit).
        }
        kumpulanIndeks[total] = indeks;  // menyimpan jumlah digit setiap huruf ke dalam array kumpulan indeks.
        total++;                         // iterasi (setiap berganti huruf).
    }

    // Pola angka:
    pola(Q, n, arr, total, indeks);  // memanggil prosedur pola angka dengan parameter (angka yang sudah dienkripsi).

    return 0;
}