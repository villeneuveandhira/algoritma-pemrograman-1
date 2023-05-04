/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal Evaluasi 1 dalam
    mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>  //Library

int main()  // Program
{
    int i, j;  // Deklarasi variabel sebagai interator.
    int k;     // Deklarasi variabel pembatas bagian array.
    int m;     // Deklarasi variabel baris pertama panjang kata m.

    scanf("%d", &m);  // Input (masukkan) untuk panjang kata m.

    char kata[m];            // Deklarasi array untuk menampung baris kedua berisi kata dengan m jumlah huruf.
    for (i = 0; i < m; i++)  // Pengulangan untuk setiap elemen array baris berisi kata.
    {
        scanf(" %c", &kata[i]);  // Input (masukkan) untuk kata dengan jumlah m.
    }

    int n;  // Deklarasi variabel baris ketiga ukuran pola n.

    scanf("%d", &n);  // Input (masukkan) untuk ukuran pola n.

    for (i = 0; i <= (n / 10) + 1; i++)  // Pengulangan untuk pola bagian atas. Ketebalan bagian atas akan bertambah 1 setiap n kelipatan 10.
    {
        for (j = (n / 10) + 1; j > i; j--)  //---bagian spasi
        {
            printf(" ");
        }

        k = 0;  // Me-reset indeks untuk bagian depan array kata.

        for (j = 0; j < (i * 2) + (n - 2) - ((n / 10) * 2); j++)  // BAGIAN KIRI ATAS.
        {
            // if (k == m / 2) // Jika indeks sudah mencapai akhir bagian depan, maka me-reset indeks ke awal bagian depan array kata.
            // {
            //     k = 0;
            // }
            // printf("%c", kata[k]);
            // k++; // Setelah setiap menampilkan huruf, indeks menambah satu.
            printf("%c", kata[j % (m / 2)]);
        }
        for (j = (n / 10) + 1; j > i; j--)  //---bagian spasi
        {
            printf(" ");
        }
        for (j = (n / 10) + 2; j > i; j--)  //---bagian spasi
        {
            printf(" ");
        }

        k = m / 2;  // Me-reset indeks untuk bagian belakang array kata.

        for (j = 0; j < (i * 2) + (n - 2) - ((n / 10) * 2); j++)  // BAGIAN KANAN ATAS.
        {
            if (k == m)  // Jika indeks sudah mencapai akhir bagian belakang, maka me-reset indeks ke awal bagian belakang array kata.
            {
                k = m / 2;
            }
            printf("%c", kata[k]);
            k++;  // Setelah setiap menampilkan huruf, indeks menambah satu.
        }
        printf("\n");  // Line baru.
    }

    for (i = 0; i < n / 2; i++)  // Pengulangan bagian tengah-bawah.
    {
        for (j = 0; j <= (i * 2) - 1; j++)  //---bagian spasi
        {
            printf(" ");
        }

        k = 0;  // Me-reset indeks untuk bagian depan array kata.

        for (j = n - 1; j > i * 2; j--)  // BAGIAN TENGAH KIRI 1
        {
            if (k == m / 2)  // Jika indeks sudah mencapai akhir bagian depan, maka me-reset indeks ke awal bagian depan array kata.
            {
                k = 0;
            }
            printf("%c", kata[k]);
            k++;  // Setelah setiap menampilkan huruf, indeks menambah satu.
        }

        if (i < n / 2)  //---bagian spasi
        {
            printf("  ");
        }

        k = m / 2;  // Me-reset indeks untuk bagian belakang array kata.

        for (j = n; j > i * 2; j--)  // BAGIAN TENGAH KANAN 1
        {
            if (k == m)  // Jika indeks sudah mencapai akhir bagian belakang, maka me-reset indeks ke awal bagian belakang array kata.
            {
                k = m / 2;
            }
            printf("%c", kata[k]);
            k++;  // Setelah setiap menampilkan huruf, indeks menambah satu.
        }
        printf("\n");
        for (j = 0; j <= (i * 2); j++)  //---bagian spasi
        {
            printf(" ");
        }

        k = 0;  // Me-reset indeks untuk bagian depan array kata.

        for (j = n - 1; j > i * 2; j--)  // BAGIAN TENGAH KIRI 2
        {
            if (k == m / 2)  // Jika indeks sudah mencapai akhir bagian depan, maka me-reset indeks ke awal bagian depan array kata.
            {
                k = 0;
            }
            printf("%c", kata[k]);
            k++;  // Setelah setiap menampilkan huruf, indeks menambah satu.
        }

        if (i < n / 2 - 1)  //---bagian spasi
        {
            printf("  ");
        }
        if ((n % 2 != 0) && (i == n / 2 - 1))  //---bagian spasi
        {
            printf("  ");
        }

        k = m / 2;  // Me-reset indeks untuk bagian belakang array kata.

        for (j = n - 2; j > i * 2; j--)  // BAGIAN TENGAH KANAN 2
        {
            if (k == m)  // Jika indeks sudah mencapai akhir bagian belakang, maka me-reset indeks ke awal bagian belakang array kata.
            {
                k = m / 2;
            }
            printf("%c", kata[k]);
            k++;  // Setelah setiap menampilkan huruf, indeks menambah satu.
        }
        printf("\n");  // Line baru.
    }

    if (n % 2 == 0)  // Jika input (masukkan) n merupakan bilangan genap.
    {
        for (i = 0; i < n; i++)  //---bagian spasi
        {
            printf(" ");
        }
        printf("%c", kata[0]);  // Menampilkan huruf indeks array bagian depan.
        printf("\n");           // Line baru.
    } else                      // Jika input (masukkan) n merupakan bilangan ganjil.
    {
        for (i = 0; i < 2; i++) {
            for (j = n; j >= i; j--)  //---bagian spasi
            {
                printf(" ");
            }
            printf("%c", kata[m / 2]);  // Menampilkan huruf indeks array bagian depan.
            printf("\n");               // Line baru.
        }
    }

    return 0;
}