/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 3
    String Rata Kanan Lagi
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // Format masukkan:
    int i, j, x;
    int n;
    scanf("%d", &n);

    char s[n][50];  // Deklarasi.

    // Lopping untuk sepanjang n array of string:
    for (i = 0; i < n; i++) {
        scanf("%s", &s[i]);  // input (masukkan) string.
    }

    int max = getMax(n, s);

    i = 0;                                      // inisialisasi.
    while (i < n) {                             // Looping untuk sepanjang n array of string.
        j = 0;                                  // inisialisasi iterator spasi.
        if (strlen(s[i]) < max) {               // String ditampilkan rata kanan.
            while ((j < max - strlen(s[i]))) {  // jika masih belum rata atau masih lebih kecil dari string terpanjang (maks) ,,
                printf(" ");                    //,, maka akan diratakan dengan spasi.
                j++;                            // iterasi.
            }
        }
        if (strlen(s[i]) % 2 == 0) {
            for (x = strlen(s[i]) / 2; x < strlen(s[i]); x++) {  // Looping untuk sepanjang indeks string dari tengah ke akhir indeks.
                printf("%c", s[i][x]);                           // Menampilkan string dari belakang.
            }
            for (x = 0; x < strlen(s[i]) / 2; x++) {  // Looping untuk sepanjang indeks string dari awal ke tengah indeks.
                printf("%c", s[i][x]);                // Menampilkan string dari belakang.
            }
            lastline(i, n);
        } else if (strlen(s[i]) % 2 != 0) {
            for (x = strlen(s[i]) - 1; x >= 0; x--) {  // Looping untuk sepanjang indeks string dari terbesar ke terkecil.
                printf("%c", s[i][x]);                 // Menampilkan string dari belakang.
            }
            lastline(i, n);
        }
        i++;  // iterasi string selanjutnya.
    }

    return 0;
}