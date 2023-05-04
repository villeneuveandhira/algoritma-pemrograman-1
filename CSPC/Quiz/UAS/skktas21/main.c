/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan Ujian Akhir Semester
soal Suku Kata Array
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

// Program:
int main() {
    // Deklarasi:
    int n,  // banyaknya elemen array of string.
        i;  // iterator.
    // Input(masukkan):
    scanf("%d", &n);

    char arr[n][100];          // deklarasi array of string.
    for (i = 0; i < n; i++) {  // looping untuk sebanyak elemen array of string.
        scanf("%s", &arr[i]);  // input (masukkan) string.
    }

    char kata[100];      // deklarasi string suku kata yang perlu dihitung.
    scanf("%s", &kata);  // input (masukkan) string.

    // Output(keluaran):
    printf("%d\n", sukukata(n, arr, kata));  // menampilkan hasil integer jumlah suku kata dengan memanggil fungsi dari mesin.

    return 0;
}