/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 9
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    char s[50];       // Deklarasi untuk variabel yang dicari.
    scanf("%s", &s);  // Input (masukkan) barang yang ingin dicari.
    printf("%s", s);
    int n;            // Deklarasi untuk variabel banyak yang terkena sihir.
    scanf("%d", &n);  // Input (masukkan) banyak barang yang terkena sihir.
    printf("%d", n);

    int i, j, k;              // iterasi.
    char kode[2];             // untuk kode barang sebelum terkena sihir.
    int energi;               // untuk energi yang dibutuhkan.
    char nama_barang[n][50];  // untuk nama barang barang sebelum terkena sihir.
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%s", &kode);
            scanf("%d", &energi);
            scanf("%s", &nama_barang);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            printf("%s", kode);
            printf("%d", energi);
            printf("%s", nama_barang);
        }
    }

    return 0;
}