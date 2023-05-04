#include <stdio.h>

int main() {
    char n;  // Variabel untuk masukkan.
    int i,   // Interator
        alphabet = 0, angka = 0;
    char a[3], b[3];

    for (i = 0; i < 6; i++) {
        scanf(" %c", &n);

        if ((n != '0') && (n != '1') && (n != '2') && (n != '3') && (n != '4') && (n != '5') && (n != '6') && (n != '7') && (n != '8') && (n != '9')) {
            a[alphabet] = n;
            alphabet++;
        } else if ((n == '0') || (n == '1') || (n == '2') || (n == '3') || (n == '4') || (n == '5') || (n == '6') || (n == '7') || (n == '8') || (n == '9')) {
            b[angka] = n;
            angka++;
        }
    }

    if ((alphabet == 3) && (angka == 3)) {
        for (i = 0; i < 3; i++) {
            printf("%c\n", a[i]);
            printf("%c\n", b[i]);
        }
    } else {
        printf("tidak valid\n");
    }

    return 0;
}