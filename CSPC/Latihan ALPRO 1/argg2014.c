#include <stdio.h>

int main() {
    int n, m,       // Deklarasi variabel banyaknya bilangan di array.
        letak = 0,  // Variabel untuk menyimpan bilangan genap.
        i;          // Interator.

    scanf("%d", &n);  // Input (masukkan) indeks array 1.
    int arr1[n];      // Deklarasi variabel array 1.
    for (i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);  // Input (masukkan) elemen array1.
    }

    scanf("%d", &m);  //---array 2.
    int arr2[m];
    for (i = 0; i < m; i++) {
        scanf("%d", &arr2[i]);
    }

    i = 0;                                   // Inisialisasi.
    while ((i < n) && (i < m)) {             // Kondisi.
        if ((arr1[i] % 2 != arr2[i] % 2)) {  // Jika pada indeks yang sama nilai array 1 tidak sama dengan array 2, maka...
            letak = 1;                       // Nilai 'letak' false.
            break;
        }
        i++;  // Iterasi.
    }

    if (letak == 0) {  // Jika nilai 'letak' true,
        printf("valid\n");
    } else {  // Jika tidak,
        printf("tidak valid\n");
    }

    return 0;
}