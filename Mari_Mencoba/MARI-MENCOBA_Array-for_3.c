#include <stdio.h>

int main()
{
    int n; //Variabel untuk menampung nilai masukkan user.
    printf("Masukkan size array :\n");
    scanf("%d", &n); //Meminta masukkan user untuk nilai array.

    int aoi[n]; //Variabel untuk menampung nilai array.
    int i;      //Variabel sebagai interator.

    printf("Masukkan nilai-nilai dalam array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &aoi[i]); //Meminta masukkan nilai-nilai dari user.
    }

    int sum = 0; //Variabel untuk menampung jumlah nilai array.
    for (i = 0; i < n; i++)
    {
        sum += aoi[i]; //Menjumlahkan semua elemen dalam array.
    }

    float average = (float)sum / (float)n;                                       //Sistem operasi untuk mencari rata-rata,
    printf("Nilai rata-rata dari semua elemen di dalam array: %.2f\n", average); //Menampilkan hasil dari rata-rata setiap elemen dalam array.

    return 0;
}