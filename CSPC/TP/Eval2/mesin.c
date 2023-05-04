/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 2
dalam mata kuliah algoritma dan pemrograman 1
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

// Library:
#include "header.h"

// Prosedur:
int check(char newL[][200], char newR[][200], int n) {
    for (int i = 0; i < n; i++) {
        int first[26] = {0}, second[26] = {0}, x = 0;
        while (newL[i][x] != '\0') {
            first[newL[i][x] - 'a']++;
            x++;
        }
        x = 0;
        while (newR[i][x] != '\0') {
            second[newR[i][x] - 'a']++;
            x++;
        }
        for (x = 0; x < 26; x++)
            if ((first[x] != second[x]))
                return 0;

        return 1;
    }
}

void palindrom(int n, char newL[][200], char newR[][200], int jam, int menit, int detik) {
    int sec, i;
    sec = detik + (60 * menit) + (3600 * jam);  // durasi film dalam detik.
    int reverse_num = 0, temp_num;
    for (i = 0; i < n; i++) {
        int lenL = strlen(newL[i]);
        int lenR = strlen(newR[i]);
        if (lenL == lenR) {
            sec += lenL + lenR;  // durasi film yang ditonton (dalam detik) ditambah jumlah kalimat anagram yang berhasil dibuat
        }
    }

    temp_num = sec;  // menyimpan sementara durasi film (detik).
    while (sec != 0) {
        reverse_num = reverse_num * 10;
        reverse_num = reverse_num + sec % 10;
        sec = sec / 10;
    }
    // memeriksa reverse_num dengan durasi yang aslinya:
    if (temp_num == reverse_num) {  // jika sama, maka palindrom.
        printf("\nTidur\n");
    } else {  // jika tidak, maka BUKAN palindrom.
        printf("\nLanjut Nonton\n");
    }
}