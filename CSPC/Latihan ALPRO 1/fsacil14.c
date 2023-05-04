#include <math.h>
#include <stdio.h>

int main() {
    double b1, b2, b3;       // Deklarasi variabel float besar.
    int k1, k2, k3,          // Deklarasi variabel integer kecil.
        kel1 = 0, kel2 = 0,  // Variabel penyimpan kelipatan.
        i, j;                // Interator.
    int depan1, depan2, depan3;
    double belakang1, belakang2, belakang3;

    scanf("%lf %lf %lf %d %d %d", &b1, &b2, &b3, &k1, &k2, &k3);

    depan1 = b1;
    depan2 = b2;
    depan3 = b3;
    belakang1 = roundf((b1 - depan1) * 100);
    belakang2 = roundf((b2 - depan2) * 100);
    belakang3 = roundf((b3 - depan3) * 100);
    // printf("%d %d %d\n", depan1, depan2, depan3);
    // printf("%lf %lf %lf\n", belakang1, belakang2, belakang3);

    i = 0;
    while (depan1 > 0) {
        depan1 -= k1;
        if (depan1 == 0) {
            kel1++;
        }
    }
    i = 0;
    while (belakang1 > 0) {
        belakang1 -= k1;
        if (belakang1 == 0) {
            kel2++;
        }
    }

    i = 0;
    while (depan2 > 0) {
        depan2 -= k2;
        if (depan2 == 0) {
            kel1++;
        }
    }
    i = 0;
    while (belakang2 > 0) {
        belakang2 -= k2;
        if ((belakang2 == 0)) {
            kel2++;
        }
    }

    i = 0;
    while (depan3 > 0) {
        depan3 -= k3;
        if (depan3 == 0) {
            kel1++;
        }
    }
    i = 0;
    while ((depan3 > 0) && (belakang3 > 0)) {
        belakang3 -= k3;
        if (belakang3 == 0) {
            kel2++;
        }
    }

    kel1 += kel2;

    if (kel1 >= 2) {
        printf("valid\n");
    } else {
        printf("tidak valid\n");
    }

    return 0;
}