/*
Saya [Villeneuve Andhira Suwandhi] NIM [2108067] mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library:
#include "header.h"

// Prosedur angka:
void jarak(int n) {
    for (int j = 0; j < n; j++) {  // looping untuk memisahkan atau memberi jarak.
        printf(" ");               // dipisahkan dengan spasi sebanyak masukkan ketebalan.
    }
}

void angka(int z, int y, int i, int n, int x, int total) {
    for (int j = 0; j < 3; j++) {          // looping kolom dalam pola angka.
        for (int k = 0; k < n; k++) {      // looping sebanyak masukkan ketebalan.
            if (Q[x][i][j] == 1) {         // jika dalam pola angka bernilai '1' maka,
                printf("B");               // menampilkan pola dengan huruf "B".
            } else if (Q[x][i][j] == 0) {  // selain itu jika dalam pola angka bernilai '0' maka,
                if ((j != 2) || (y != 0) || (z != total - 1)) {
                    printf(" ");  // menampilkan spasi atau kosong.
                }
            } else if (Q[x][i][j] == 3) {
                if (!((y == 0) && (z == total - 1))) {
                    printf(" ");  // menampilkan spasi atau kosong.
                }
            }
        }
    }
}

// Prosedur pola angka:
void pola(int Q[10][5][3], int n, int arr[][255], int total, int indeks) {
    for (int i = 0; i < 5; i++) {  // looping baris pola angka.
        for (int l = 0; l < n; l++) {
            for (int j = 0; j < total; j++) {   // looping huruf yang dienkripsi.
                int k = kumpulanIndeks[j] - 1;  // inisialisasi sesuai dengan kumpulan indeks yang sudah disimpan.
                while (k >= 0) {
                    angka(j, k, i, n, arr[j][k], total);  // memanggil prosedur angka untuk pola angka sesuai dengan nilainya.
                    if ((j != total - 1) || (k != 0)) {   // syarat untuk jarak antar digit.
                        jarak(n);                         // memanggil prosedur jarak untuk memisahkan antar digit.
                    }
                    k--;  // iterasi (berkurang, karena ingin mengambil angka dari akhir digit ke awal atau terbalik).
                }
                if (j != total - 1) {  // syarat untuk jarak antar ASCII.
                    jarak(n);          // memanggil prosedur jarak untuk memisahkan antar angka ASCII.
                }
            }
            printf("\n");  // memberikan enter.
        }
    }
}
