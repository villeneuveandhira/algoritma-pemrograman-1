#include <stdio.h>

int main() {
    int n,            // Elemen array.
        depan,        // Menyimpan angka di depan koma.
        belakang,     // Menyimpan angka di belakang koma.
        i;            // Interator.
    scanf("%d", &n);  // Input (masukkan) jumlah elemen array.

    float array[n];
    for (i = 0; i < n; i++) {
        scanf("%f", &array[i]);  // Input (masukkan) baris float.
    }

    for (i = 0; i < n; i++) {
        depan = array[i];
        belakang = (array[i] - depan) * 100;
    }

    if ((depan % 2 == 0) && (belakang % 2 == 1)) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}