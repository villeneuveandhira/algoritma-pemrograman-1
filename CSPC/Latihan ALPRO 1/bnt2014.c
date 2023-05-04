#include <stdio.h>

int main() {
    int n,     // Deklarasi variabel integer penentu pola.
        i, j;  // Interator.

    scanf("%d", &n);  // Input (masukkan).

    for (i = 0; i < n; i++) {       // BAGIAN BARIS ATAS.
        for (j = 0; j <= i; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j <= i; j++) {  // Pola kolom 2.
            printf("*");
        }
        for (j = 0; j <= n; j++) {  // ...
            printf("*");
        }
        for (j = 0; j < i; j++) {  // ...
            printf("*");
        }
        printf("\n");
    }

    for (i = 1; i < n; i++) {      // BAGIAN BARIS TENGAH.
        for (j = n; j > i; j--) {  // Pola kolom 1.
            printf("*");
        }
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n; j > i; j--) {  // Pola kolom 2.
            printf("*");
        }
        for (j = 0; j <= n; j++) {  // ...
            printf("*");
        }
        for (j = n - 1; j > i; j--) {  // ...
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {       // BAGIAN BARIS BAWAH.
        for (j = 0; j <= i; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j <= i; j++) {  // Pola kolom 2.
            printf("*");
        }
        printf("\n");
    }

    return 0;
}