#include <stdio.h>

int main() {
    int i, j,         // Interator.
        n;            // Masukkan.
    scanf("%d", &n);  // Input (masukkan).

    for (i = 0; i < n; i++) {          // BAGIAN BARIS ATAS.
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < i; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = 0; j < 1; j++) {
            if (i < 1) {
                printf(" ");
            } else {
                printf("*");
            }
        }
        for (j = 0; j < n; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = 0; j < (n * 2) - 2; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  // Pola kolom 2.
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < n - 1; i++) {  // BAGIAN BARIS TENGAH.
        for (j = 0; j < n; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = n - 3; j > (2 * i - n); j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  // Pola kolom 2.
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < (n * 2) - 1; i++) {  // BAGIAN BARIS ANTAR TENGAH DAN BAWAH.
        printf(" ");
    }
    for (i = 0; i < (n * 2) - 1; i++) {  // BAGIAN BARIS ANTAR TENGAH DAN BAWAH.
        printf("*");
    }
    printf("\n");

    for (i = 0; i < n; i++) {      // BAGIAN BARIS BAWAH.
        for (j = 0; j < 1; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = 0; j <= i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < ((n - 2) * 2) - 1; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j <= i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  // Pola kolom 2.
            printf("*");
        }
        printf("\n");
    }

    return 0;
}