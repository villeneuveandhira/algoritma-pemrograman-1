/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 2
    String Ganjil Genap Gege
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <string.h>

int main() {
    int i, j, x;        // iterator.
    char str[900];      // String dengan panjang maksimal karakter yang dapat ditampung adalah 900 karakter.
    scanf("%s", &str);  // input (masukkan) string.
    char opt[900];      // Posisi setiap huruf atau karakter.
    scanf("%s", &opt);  // ---------------- genap atau ganjil.

    int n;               // Panjang karakter suku dan suku kata.
    scanf("%d", &n);     // input (masukkan) panjang karakter.
    char word[n];        // Suku kata (maksimal 10 karakter).
    scanf("%s", &word);  // ---------------- suku kata.

    char new_str[900];                                                                                          // String bentukan dari karakter posisi ganjil atau genap.
    j = 0;                                                                                                      // inisialisasi.
    for (i = 0; i < strlen(str); i++) {                                                                         // Looping untuk sepanjang karakter string input.
        if (((strcmp("ganjil", opt) == 0) && (i % 2 == 0)) || ((strcmp("genap", opt) == 0) && (i % 2 != 0))) {  // syarat posisi setiap huruf atau karakter ganjil(indeks 0, 2, 4, 6, ...) atau posisi genap (indeks 1, 3, 5, 7, ...).
            new_str[j] = str[i];                                                                                // huruf atau karakter dimasukkan ke string bentukan sesuai dengan posisi ganjil-nya atau genap-nya.
            new_str[j + 1] = '\0';                                                                              // untuk memastikan akhir dari array of char-nya null.
            j++;                                                                                                // ---iterasi.
        }
    }

    x = 0;                         // inisialisasi.
    i = 0;                         // ...
    while (i < strlen(new_str)) {  // Looping untuk sepanjang string bentukan.
        char temp[900];            // Deklarasi string baru untuk menyimpan sementara.
        int k = i;                 // iterator baru sesuai i.
        j = 0;                     // inisialisasi.
        while (j < n) {            // Looping untuk sebanyak suku kata.
            temp[j] = new_str[k];  // String bentukan dibagi-bagi menjadi string baru sesuai dengan banyaknya suku kata masukkan.
            temp[j + 1] = '\0';    // untuk memastikan akhir dari array of char-nya null.
            j++;                   // ---iterasi.
            k++;                   // ---iterasi.
        }
        if (strcmp(word, temp) == 0) {  // untuk membandingkan setiap string baru adakah yang sama dengan masukkan karakter suku kata.
            x++;                        // jika ada yang sama x (penghitung) untuk banyaknya suku kata, akan bertambah 1.
        }
        i++;  // ---iterasi.
    }

    printf("%s\n", new_str);  // menampilkan string bentukan dari karakter posisi ganjil atau genap.
    printf("%d\n", x);        // banyaknya suku kata.

    return 0;
}