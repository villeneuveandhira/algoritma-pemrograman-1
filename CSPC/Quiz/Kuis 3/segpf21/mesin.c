/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 3
    Segitiga Paling
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

void getLuas(int n, int luas[], int sisi[][3], int miring[]) {
    int i, j, max = 0, x = 0;  // Deklarasi.
    for (i = 0; i < n; i++) {
        int s = 0;  // Setengah keliling segitiga.
        for (j = 0; j < 3; j++) {
            s += sisi[i][j];  // Jumlahkan semua sisi segitiga atau keliling segitiga.
        }
        s /= 2;                                                                      // Bagi dua untuk mendapatkan setengah keliling.
        luas[i] = sqrt(s * (s - sisi[i][0]) * (s - sisi[i][1]) * (s - sisi[i][2]));  // Mencari luas segitiganya.
        if (luas[i] > max) {                                                         // Syarat untuk mencari luas tertinggi.
            max = luas[i];                                                           // Jika luas di indeks lain lebih tinggi maka akan diisi.
            x = i;                                                                   // x sebagai indeks untuk sisi miring segitiga dengan luas tertinggi.
        }
    }
    printf("%d %d\n", max, miring[x]);  // Menampilkan keluaran dengan format (luas, sisi miring).
}