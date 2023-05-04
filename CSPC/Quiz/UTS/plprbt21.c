/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal 1 Ujian Tengah Semester dalam
    mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main()
{
    int n;    // Deklarasi variabel untuk input integer penentu pola.
    int i, j; // Deklarasi variabel sebagai interator.

    scanf("%d", &n); // Input (masukkan) user untuk penentu pola.

    /*
    (FOR) Pengulangan pola.
    */
    for (i = 0; i < n; i++) // BAGIAN ATAS
    {
        for (j = 0; j < n * 5; j++)
        {
            printf(" ");
        }
        for (j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) // Pengulangan untuk pola pertama.
        {
            printf("*");
        }

        printf("\n"); // Memberi line baru.
    }

    for (i = 0; i < n; i++) // BAGIAN TENGAH ATAS
    {
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) // Pengulangan untuk pola pertama.
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++) // Pengulangan untuk pola kedua.
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (j = 0; j <= i; j++) // Pengulangan untuk pola ketiga.
        {
            printf("*");
        }
        for (j = 0; j < n + 1; j++)
        {
            printf(" ");
        }
        for (j = n - 1; j > i; j--)
        {
            printf(" ");
        }
        for (j = -2; j < (2 * i - 1); j++) // Pengulangan untuk pola keempat.
        {
            printf("*");
        }

        printf("\n"); // Memberi line baru.
    }

    for (i = 0; i < n; i++) // BAGIAN TENGAH
    {
        for (j = 0; j < n; j++) // Pengulangan untuk pola pertama.
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n * 3; j++) // Pengulangan untuk pola kedua.
        {
            printf("*");
        }
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++) // Pengulangan untuk pola ketiga.
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < (n * 2) + 1; j++) // Pengulangan untuk pola keempat.
        {
            printf("*");
        }

        printf("\n"); // Memberi line baru.
    }

    for (i = 0; i < n; i++) // BAGIAN TENGAH BAWAH
    {
        for (j = 0; j < n; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = n; j > i; j--) // Pengulangan untuk pola pertama.
        {
            printf("*");
        }
        for (j = 0; j < n * 2; j++)
        {
            printf(" ");
        }
        for (j = 0; j < n; j++) // Pengulangan untuk pola kedua.
        {
            printf("*");
        }
        for (j = 0; j < n * 3; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = n; j > i; j--) // Pengulangan untuk pola ketiga.
        {
            printf("*");
        }
        for (j = 0; j < n + 1; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = n; j > (2 * i - n) + 1; j--) // Pengulangan untuk pola keempat.
        {
            printf("*");
        }

        printf("\n"); // Memberi line baru.
    }

    for (i = 0; i < n; i++) // BAGIAN BAWAH
    {
        for (j = 0; j < n * 5; j++)
        {
            printf(" ");
        }
        for (j = 0; j < i; j++)
        {
            printf(" ");
        }
        for (j = n; j > i; j--) // Pengulangan untuk pola pertama.
        {
            printf("*");
        }

        printf("\n"); // Memberi line baru.
    }

    return 0;
}