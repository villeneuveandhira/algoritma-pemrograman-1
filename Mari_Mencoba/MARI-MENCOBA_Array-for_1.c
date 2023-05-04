#include <stdio.h>

int main()
{
    int n;           //Variabel untuk menampung nilai masukkan dari user.
    scanf("%d", &n); //Masukkan user untuk nilai n.

    int aoi[n]; //Variabel untuk menampung nilai array dari array of integer.
    int i;      //Variabel sebagai interator.

    for (i = 0; i < n; i++)
    {
        scanf("%d", &aoi[i]); //Untuk mengisi nilai setiap array.
    }

    int maksimal = aoi[0]; //Variabel untuk menampung nilai maksimal dari 0.
    for (i = 0; i < n; i++)
    {
        if (maksimal < aoi[i]) //Kondisi untuk nilai maksimal.
        {
            if (aoi[i] % 2 == 1) //Syarat jika nilai array of integer merupakan bilangan ganjil.
            {
                maksimal = aoi[i]; //Nilai maksimal diisikan oleh array of integer lebih maksimal.
            }
        }
    }

    printf("nilai maksimal (ganjil): %d\n", maksimal); //Menampilkan keluaran dengan nilai maksimal yang ganjil dari array of integer.

    return 0;
}