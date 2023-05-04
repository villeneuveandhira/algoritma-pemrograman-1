/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 2
    Pengelompokan String Reserve
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, x;      // iterator.
    int n;            // Deklarasi variabel banyaknya string di dalam array of string.
    scanf("%d", &n);  // input (masukkan) n.

    char s[n][200];  // Deklarasi array of string 1 dengan panjang maksimal string menampung 200 karakter.

    for (i = 0; i < n; i++) {  // Lopping untuk sepanjang n array of string.
        scanf("%s", &s[i]);    // input (masukkan) string.
    }

    int maks = 0;                   // Deklarasi variabel jumlah string terpanjang.
    for (i = 0; i < n; i++) {       // Looping untuk sepanjang n array of string.
        if (strlen(s[i]) > maks) {  // jika panjang string di indeks lebih besar dari maks,,
            maks = strlen(s[i]);    //,, maka mengisi maks dengan string terpanjang.
        }
    }

    i = 0;                                       // inisialisasi.
    while (i < n) {                              // Looping untuk sepanjang n array of string.
        j = 0;                                   // inisialisasi iterator spasi.
        if (strlen(s[i]) < maks) {               // String ditampilkan rata kanan.
            while ((j < maks - strlen(s[i]))) {  // jika masih belum rata atau masih lebih kecil dari string terpanjang (maks) ,,
                printf(" ");                     //,, maka akan diratakan dengan spasi.
                j++;                             // iterasi.
            }
        }
        for (x = strlen(s[i]) - 1; x >= 0; x--) {  // Looping untuk sepanjang indeks string dari terbesar ke terkecil.
            printf("%c", s[i][x]);                 // Menampilkan string dari belakang.
        }
        if ((strlen(s[i]) > strlen(s[i + 1])) && (i != n - 1)) {  // jika string yang lebih pendek dari string sebelumnya,,
            printf("\n\n");                                       // ,, maka ditambahkan enter atau (\n).
        } else {                                                  // selain itu,,
            printf("\n");                                         // ,, hanya akan melanjutkan string selanjutnya.
        }
        i++;  // iterasi string selanjutnya.
    }

    return 0;
}