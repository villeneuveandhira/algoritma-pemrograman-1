#include <stdio.h>

int main() {
    int angka,  // Variabel untuk masukkan.
        i,      // Interator
        genap = 0, ganjil = 0;
    int arr1[3], arr2[3];

    for (i = 0; i < 6; i++) {
        scanf("%d", &angka);

        if (angka % 2 == 0) {
            arr1[genap] = angka;
            genap++;
        } else {
            arr2[ganjil] = angka;
            ganjil++;
        }
    }

    if ((genap == 3) && (ganjil == 3)) {
        for (i = 0; i < 3; i++) {
            printf("%d\n", arr1[i]);
            printf("%d\n", arr2[i]);
        }
    } else {
        printf("tidak valid\n");
    }

    return 0;
}