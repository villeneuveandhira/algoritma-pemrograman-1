/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 3
    Segitiga Paling
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // Format Masukkan:
    int i, j, n;      // 0 < n < 100, banyaknya elemen array of tipe bentukan.
    scanf("%d", &n);  // n baris angka sisi segitiga siku-siku.

    // Deklarasi:
    int sisi[n][3];
    int miring[n];

    // Looping sebanyak n:
    for (i = 0; i < n; i++) {
        miring[i] = 0;  // set awal untuk sisi miring.
        j = 0;          // inisialisasi.
        while (j < 3) {
            scanf("%d", &sisi[i][j]);      // meminta inputan user untuk setiap sisi segitiga.
            if (sisi[i][j] > miring[i]) {  // Syarat untuk menemukan sisi miring dari setiap array atau segitiga siku-siku.
                miring[i] = sisi[i][j];    // Jika didapatkan sisi paling besar maka itu adalah sisi miringnya.
            }
            j++;  // iterasi.
        }
    }

    int luas[n];                     // variabel untuk menampung luas.
    getLuas(n, luas, sisi, miring);  // Memanggil prosedur.

    return 0;
}