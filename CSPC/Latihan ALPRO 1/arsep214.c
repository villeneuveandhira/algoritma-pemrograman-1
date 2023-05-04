#include <math.h>
#include <stdio.h>

int main() {
    int n, m,                // Deklarasi variabel banyaknya bilangan di array.
        sum1 = 0, sum2 = 0,  // Jumlah nilai elemen array.
        i;                   // Interator.

    scanf("%d", &n);  // Input (masukkan) indeks array 1.
    int arr1[n];      // Deklarasi array 1.
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);  // Input (masukkan) elemen array 1.
    }

    for (i = 0; i < n; i++) {  // Pengecekkan dalam array 1.
        if (i < n / 2) {
            sum1 += arr1[i];  // Menjumlahkan nilai elemen separuh array 1.
        }
    }

    scanf("%d", &m);  //---array 2.
    int arr2[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    for (i = 0; i < m; i++) {
        if (i >= m / 2) {
            sum2 += arr2[i];  // Menjumlahkan nilai elemen separuh array 2.
        }
    }

    if (sum1 == sum2) {
        printf("valid\n");  // Jika jumlah nilai elemen separuh array 1 bagian depan sama dengan separuh array 2 bagian belakang.
    } else {
        printf("tidak valid\n");  // Jika tidak.
    }

    return 0;
}