#include <stdio.h>

int main() {
    int b1, b2, b3,  // Deklarasi variabel besar.
        k1, k2, k3,  // Deklarasi variabel kecil.
        kel = 0,     // Variabel penyimpan kelipatan.
        i, j;        // Interator.

    scanf("%d %d %d %d %d %d", &b1, &b2, &b3, &k1, &k2, &k3);

    i = 0;
    while (b1 > 0) {
        b1 -= k1;
        if (b1 == 0) {
            kel++;
        }
    }

    i = 0;
    while (b2 > 0) {
        b2 -= k2;
        if (b2 == 0) {
            kel++;
        }
    }

    i = 0;
    while (b3 > 0) {
        b3 -= k3;
        if (b3 == 0) {
            kel++;
        }
    }

    if (kel >= 2) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }

    return 0;
}