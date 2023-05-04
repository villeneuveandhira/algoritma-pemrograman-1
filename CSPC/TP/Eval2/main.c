/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 2
dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    // masukan baris pertama adalah n, yaitu jumlah penggalan dialog:
    int n, i;
    scanf("%d", &n);

    // masukan n baris berikutnya adalah pasangan kalimat penggalan dialog dengan kalimat tebakan dipisahkan oleh karakter:
    char input[n][200];
    int jam, menit, detik;
    for (i = 0; i < n; i++) {
        scanf("%s", &input[i]);
    }
    // masukan baris terakhir adalah durasi film:
    scanf("%d:%d:%d", &jam, &menit, &detik);

    // memisahkan kalimat oleh karakter '?':
    char left[n][200], right[n][200];  // deklarasi.
    for (i = 0; i < n; i++) {
        int x = 0, y = 0;              // inisialisasi.
        while (input[i][x] != '?') {   // mengulang sebelum ada karakter '?'.
            left[i][x] = input[i][x];  // menyimpan kata.
            left[i][x + 1] = '\0';     // memastikan akhiran arrayofstring adalah null.
            x++;                       // iterasi.
        }
        while (x < strlen(input[i])) {      // mengulang kata > karakter '?'.
            x++;                            // iterasi (diawal karena melewati karakter '?').
            if (input[i][x] != '?') {       // kata selain karakter '?'.
                right[i][y] = input[i][x];  // menyimpan kata.
                y++;                        // iterasi.
            }
        }
    }

    // menghilangkan karakter '_' setelah dipisah oleh karakter '?':
    char newL[n][200], newR[n][200];  // deklarasi.
    for (i = 0; i < n; i++) {
        // untuk kalimat sebelum karakter '?':
        int x = 0, a = 0;                 // inisialisasi.
        while (x < strlen(left[i])) {     // mengulang sepanjang kata.
            if (left[i][x] != '_') {      // jika selain karakter '_' maka,
                newL[i][a] = left[i][x];  // menyimpan kata.
                newL[i][a + 1] = '\0';    // memastikan akhiran arrayofstring adalah null.
                a++;                      // iterasi.
                x++;                      // iterasi.
            } else {                      // jika ada karakter '_' maka,
                x++;                      // dilewati atau masuk ke indeks kalimat selanjutnya.
            }
        }
        // untuk kalimat setelah karakter '?':
        int y = 0, b = 0;               // inisialisasi.
        while (y < strlen(right[i])) {  // algoritma menyimpan kata selain karakter '_' sama seperti sebelumnya.
            if (right[i][y] != '_') {
                newR[i][b] = right[i][y];
                newR[i][b + 1] = '\0';
                b++;
                y++;
            } else {
                y++;
            }
        }
    }

    // keluaran n baris pertama adalah kalimat Anagram! atau Bukan Anagram!.
    for (i = 0; i < n; i++) {
        // menggunakan syarat apabila kalimat yang dibuat tim pembuat merupakan anagram dari kalimat penggalan dialog yang dicatat oleh tim pencatat:
        if (check(newL, newR, n))
            printf("Anagram!\n");
        else
            printf("Bukan Anagram!\n");
    }

    // keluaran baris terakhir adalah kalimat Lanjut Nonton atau Tidur.
    palindrom(n, newL, newR, jam, menit, detik);  // memanggil prosedur.

    return 0;
}