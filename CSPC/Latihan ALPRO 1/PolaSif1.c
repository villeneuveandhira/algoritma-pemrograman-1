#include <stdio.h>

int main() {
    int i, j,  // Interator.
        n;     // Masukkan.
    scanf("%d", &n);

    for (i = 0; i < n - 1; i++) {  // BAGIAN BARIS ATAS.
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n * 2; j > i; j--) {  // Pola kolom 2.
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {          // BAGIAN BARIS TENGAH.
        for (j = 0; j < n - 1; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n; j > i; j--) {  // Pola kolom 1.
            printf("*");
        }
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {
            if (i < 1) {  // Pola kolom 2.
                printf("*");
            } else if (i >= 1) {  //---bagian spasi.
                printf(" ");
            }
        }
        for (j = 0; j < i; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = n; j > i; j--) {  // Pola kolom 3.
            printf("*");
        }
        printf("\n");
    }

    for (i = 0; i < n; i++) {          // BAGIAN BARIS BAWAH.
        for (j = 0; j < n - 1; j++) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j <= i; j++) {  // Pola kolom 1.
            printf("*");
        }
        for (j = n - 1; j > i; j--) {  //---bagian spasi.
            printf(" ");
        }
        for (j = 0; j < n; j++) {  //---bagian spasi.
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