/*
Saya [Villeneuve Andhira Suwandhi] NIM [2108067] mengerjakan evaluasi Tugas Masa Depan dalam mata kuliah
Algoritma dan Pemrograman I untuk keberkahanNya maka saya tidak
melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library:
#include <stdio.h>
#include <string.h>

/*
Buatlah sebuah program yang menerima masukan berupa sebuah string untuk dienkripsi menjadi sandi
berdasarkan angka ASCII dari setiap karakter di dalam string. ASCII dari setiap huruf dapat dilihat
pada table ASCII yang dapat dicari di Google.

Masukan selalu bilangan bulat. Jika masukan adalah:
aku
2

Jika diubah menjadi ASCII adalah 97 107 117 (selisih dari setiap angka dalam satu ASCII dari 1 huruf
adalah 1 spasi dikali ketebalan, sedangkan selisih antar ASCII dari dua buah huruf adalah 2 spasi dikali
ketebalan).

Jika masukan adalah:
ADAB
1

Maka ASCII nya adalah 65 68 65 66.
*/

int Q[10][5][3];          // kumpulan pola angka.
int kumpulanIndeks[255];  // kumpulan jumlah indeks dalam array [total][indeks].

// Deklarasi prosedur:
void jarak(int n);
void angka(int z, int y, int i, int n, int x, int total);
void pola(int Q[10][5][3], int n, int arr[][255], int total, int indeks);