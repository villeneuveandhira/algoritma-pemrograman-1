#include <math.h>
#include <stdio.h>

int main() {
    int n,            // Elemen array.
        i;            // Interator.
    int depan;        // Menyimpan angka di depan koma.
    float belakang;   // Menyimpan angka di belakang koma.
    scanf("%d", &n);  // Input (masukkan) jumlah elemen array.

    float array[n];
    for (i = 0; i < n; i++) {
        scanf("%f", &array[i]);  // Input (masukkan) baris float.
    }

    int bulat = 0;
    for (i = 0; i < n; i++) {  // Menentukan angka di depan dan belakang koma.
        depan = roundf(array[i]);
        belakang = roundf(((array[i]) - depan) * 100);
        while (depan > 0) {  // Perulangan untuk memeriksa bilangan bulat.
            depan -= belakang;
        }
        if (depan == 0) {
            bulat++;
        }
    }

    if (bulat >= 3) {
        printf("yes\n");  // Jika bilangan bulat.
    } else {
        printf("no\n");  // Jika bukan bilangan bulat.
    }

    return 0;
}