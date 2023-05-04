/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan Ujian Akhir Semester
soal Integer Pola
dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include "header.h"

int main() {
    int n, i, j, k, l;
    scanf("%d", &n);

    int arr[n][4];
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int temp;
    for (i = 0; i < n; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 3; k++) {
                if (arr[i][k + 1] < arr[i][k]) {
                    swap(&arr[i][k + 1], &arr[i][k]);
                }
            }
        }
    }

    int spasi = 0;
    for (i = 0; i < n; i++) {
        int x = arr[i][3];
        int y = 0;
        // if (i == 0) {
        //     spasi = 0;
        //     y = 0;
        // }
        while (x != 0) {
            y++;
            x /= 10;
        }
        spasi += y;
        for (j = 0; j < 4; j++) {
            for (k = 0; k < spasi - y; k++) {
                if (i != 0) {
                    printf(" ");
                }
            }
            printf("%d\n", arr[i][j]);
        }
    }

    return 0;
}