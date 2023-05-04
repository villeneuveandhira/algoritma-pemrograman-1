/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 4
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main()
{
    char c;    // Variabel untuk kode masukkan.
    int n;     // Variabel untuk ukuran pola.
    int angka; // Variabel untuk menyimpan angka genap atau ganjil.

    scanf(" %c %d", &c, &n); // Input dari user untuk kode masukkan dan ukuran angka.

    //  FUNGSI IF  //

    if ((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')) // Jika kode masukkan merupakan huruf vokal.
    {
        angka = 0;
    }

    if ((c != 'a') && (c != 'i') && (c != 'u') && (c != 'e') && (c != 'o')) // Jika kode masukkan merupakan huruf konsonan.
    {
        angka = 1;
    }

    //  FUNGSI FOR  //

    for (int i = 0; i < n; i++) // BAGIAN TANDUK
    {
        for (int a = 0; a <= i; a++)
        {
            printf(" ");
        }

        for (int b = 0; b <= i; b++) // Pengulangan untuk bagian tanduk kiri.
        {
            printf("%d", angka);
        }

        for (int c = n - 1; c > i; c--) // Pengulangan untuk spasi antara bagian tanduk.
        {
            printf("  ");
        }

        for (int d = 0; d < (n * 5); d++)
        {
            printf(" ");
        }

        for (int e = n - 1; e > i; e--)
        {
            printf("  ");
        }

        for (int f = 0; f <= i; f++) // Pengulangan untuk bagian tanduk kanan.
        {
            printf("%d", angka);
        }

        angka += 2; // Setiap baris baru bertambah 2.

        if (angka > 9) // Syarat untuk tidak melibihi batas angka.
        {
            if ((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')) // Jika kode masukkan merupakan huruf vokal.
            {
                angka = 0;
            }

            else if ((c != 'a') && (c != 'i') && (c != 'u') && (c != 'e') && (c != 'o')) // Jika kode masukkan merupakan huruf konsonan.
            {
                angka = 1;
            }
        }

        printf("\n");
    }

    for (int i = 0; i < n; i++) // BAGIAN TENGAH
    {
        for (int a = n - 1; a > i; a--)
        {
            printf(" ");
        }

        for (int b = 0; b <= i; b++)
        {
            printf("%d", angka);
        }

        if ((i > 0) && (i < n - 1))
        {
            for (int c = 0; c < n; c++) // Pengulangan untuk bagian mata kiri yang (kosong/spasi).
            {
                printf(" ");
            }
        }
        else
        {
            for (int c = 0; c < n; c++) // Pengulangan untuk bagian mata kiri (atas dan bawah)-nya yang (kosong/spasi).
            {
                printf("%d", angka);
            }
        }

        for (int d = 0; d < n; d++)
        {
            printf("%d", angka);
        }

        for (int e = 0; e < n; e++)
        {
            printf("%d", angka);
        }

        if ((i > n - 3) && (i < n - 1))
        {
            for (int f = 0; f < n; f++) // Pengulangan untuk bagian tengah yang (kosong/spasi).
            {
                printf(" ");
            }
        }
        else
        {
            for (int f = 0; f < n; f++) // Pengulangan untuk bagian tengah (atas dan bawah)-nya yang (kosong/spasi).
            {
                printf("%d", angka);
            }
        }

        for (int g = 0; g < n; g++)
        {
            printf("%d", angka);
        }

        for (int h = 0; h < n; h++)
        {
            printf("%d", angka);
        }

        if ((i > 0) && (i < n - 1))
        {
            for (int j = 0; j < n; j++) // Pengulangan untuk bagian mata kanan yang (kosong/spasi).
            {
                printf(" ");
            }
        }
        else
        {
            for (int j = 0; j < n; j++) // Pengulangan untuk bagian mata kiri (atas dan bawah)-nya yang (kosong/spasi).
            {
                printf("%d", angka);
            }
        }

        for (int k = 0; k <= i; k++)
        {
            printf("%d", angka);
        }

        angka += 2; // Setiap baris baru bertambah 2.

        if (angka > 9) // Syarat untuk tidak melibihi batas angka.
        {
            if ((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')) // Jika kode masukkan merupakan huruf vokal.
            {
                angka = 0;
            }

            else if ((c != 'a') && (c != 'i') && (c != 'u') && (c != 'e') && (c != 'o')) // Jika kode masukkan merupakan huruf konsonan.
            {
                angka = 1;
            }
        }

        printf("\n");
    }

    for (int i = 0; i < n; i++) // BAGIAN KAKI
    {
        for (int a = 0; a < n; a++)
        {
            printf(" ");
        }

        for (int b = 0; b < n; b++) // Pengulangan untuk bagian kaki paling kiri.
        {
            printf("%d", angka);
        }

        for (int c = 0; c < n; c++)
        {
            printf(" ");
        }

        for (int d = 0; d < n; d++)
        {
            printf("%d", angka);
        }

        for (int e = 0; e < n; e++)
        {
            printf(" ");
        }

        for (int f = 0; f < n; f++)
        {
            printf("%d", angka);
        }

        for (int g = 0; g < n; g++)
        {
            printf(" ");
        }

        for (int h = 0; h < n; h++) // Penguangan untuk bagian kaki paling kanan.
        {
            printf("%d", angka);
        }

        angka += 2; // Setiap baris baru bertambah 2.

        if (angka > 9) // Syarat untuk tidak melibihi batas angka.
        {
            if ((c == 'a') || (c == 'i') || (c == 'u') || (c == 'e') || (c == 'o')) // Jika kode masukkan merupakan huruf vokal.
            {
                angka = 0;
            }

            else if ((c != 'a') && (c != 'i') && (c != 'u') && (c != 'e') && (c != 'o')) // Jika kode masukkan merupakan huruf konsonan.
            {
                angka = 1;
            }
        }

        printf("\n");
    }

    return 0;
}