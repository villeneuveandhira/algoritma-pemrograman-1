/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 3
    String Rata Kanan Lagi
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int getMax(int n, char s[][50]) {
    int i, maks = 0;  // deklarasi variabel.
    for (i = 0; i < n; i++) {
        if (strlen(s[i]) > maks) {  // jika ada yang lebih panjang,,
            maks = strlen(s[i]);    //,, maka akan mengisi maks.
        }
    }

    return maks;
}

void lastline(int i, int n) {
    if (i != n) {      // jika string belum berakhir,,
        printf("\n");  // ,, hanya akan melanjutkan string selanjutnya.
    }
}