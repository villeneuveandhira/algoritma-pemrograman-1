/*
Saya Villeneuve Andhira NIM 2108067 mengerjakan soal 2 Ujian Tengah Semester dalam
    mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya maka saya
    tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main()
{
    int n;           // Deklarasi variabel untuk banyaknya indeks array karakter.
    scanf("%d", &n); // Input (masukkan) banyaknya elemen array.

    char arr1[n]; // Deklarasi variabel untuk menampung array karakter.
    int i, j;     // Variabel sebagai interator.

    for (i = 0; i < n; i++) // Pengulangan untuk input (masukkan) banyak elemen dalam array karakter.
    {
        scanf(" %c", &arr1[i]); // Input (masukkan) untuk banyaknya elemen array karakter.
    }

    int awal, akhir;     // Deklarasi variabel untuk batas wilayah pencarian di dalam array karakter.
    scanf("%d", &awal);  // Input (masukkan) untuk batas awal indeks.
    scanf("%d", &akhir); // Input (masukkan) untuk batas akhir indeks.

    int m;           // Variabel banyaknya huruf yang dihitung jumlahnya.
    scanf("%d", &m); // Input (masukkan) untuk jumlah banyaknya huruf.

    char arr2[m]; // Deklarasi variabel untuk menyimpan huruf masukkan.

    for (i = 0; i < m; i++) // Pengulangan untuk input (masukkan) huruf yang dihitung.
    {
        scanf(" %c", &arr2[i]); // Input (masukkan) untuk huruf yang mau dihitung.
    }

    int arr3[m]; // Variabel untuk menyimpan banyaknya huruf masukkan.

    for (i = 0; i < m; i++) // Pengulangan pada array penyimpan huruf masukkan.
    {
        int jumlah = 0;
        for (j = awal; j <= akhir; j++) // Pengulangan pada array banyaknya huruf.
        {
            if (arr1[j] == arr2[i]) // Kondisi syarat sebagai pembanding.
            {
                jumlah++; // Setiap ada karakter yang sama dijumlahkan.
            }
        }
        arr3[i] = jumlah; // Jumlah total pembanding dimasukkan ke dalam array yang menyimpan banyaknya huruf masukkan.
    }

    for (i = 0; i < m; i++) // Pengulangan untuk output (keluaran).
    {
        printf("%d", arr3[i]); // Menampilkan banyak jumlah huruf setiap karakter.
        if (i < m - 1)         // Jika karakter belum berakhir, maka akan diberi spasi sampai karakter berakhir/habis.
        {
            printf(" ");
        }
        else // Jika karakter sudah berakhir, maka akan diberi spasi new line.
        {
            printf("\n");
        }
    }

    return 0;
}