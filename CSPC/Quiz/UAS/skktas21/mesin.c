/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan Ujian Akhir Semester
soal Suku Kata Array
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int sukukata(int n, char arr[][100], char kata[100]) {
    int total = 0, i, j;                        // deklarasi.
    for (i = 0; i < n; i++) {                   // looping sebanyak elemen array of string.
        for (j = 0; j < strlen(arr[i]); j++) {  // looping sepanjang string.
            char temp[100];                     // string sementara.
            int x = j;                          // iterator.
            int k = 0;                          // inisialisasi.
            while (k < strlen(kata)) {          // looping sebanyak masukkan suku kata.
                temp[k] = arr[i][x];            // memasukkan char ke dalam string sementara.
                temp[k + 1] = '\0';             // untuk memastikan setiap akhir string diakhiri null.
                k++;                            // iterasi.
                x++;                            // iterasi.
            }
            if (strcmp(temp, kata) == 0) {  // syarat jika perbandingan antara string sementara dengan masukkan suku kata SAMA.
                total++;                    // maka total integer jumlah suku kata bertambah 1.
            }
        }
    }
    return total;  // mengembalikan nilai total.
}