#include <stdio.h>

int main()
{
    int n; //Variabel untuk menampung nilai masukkan dari user.
    printf("Masukkan nilai untuk size array:\n");
    scanf("%d", &n);

    int a[n]; //Variabel untuk menampung array.
    int i;    //Variabel sebagai interator.

    printf("Masukkan setiap nilai dalam array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]); //Meminta masukkan user untuk setiap nilai dalam array.
    }

    int minimal = a[0]; //Variabel untuk menampung nilai minimal dalam array.
    for (i = 1; i < n; i++)
    {
        if (minimal > a[i]) //Kondisi untuk nilai minimal.
        {
            if (i % 2 == 0) //Syarat jika nilai minimal bernilai genap.
            {
                minimal = a[i]; //.. akan diisikan dengan nilai minimal.
            }
        }
    }

    printf("Nilai minimal array dengan indeks genap: %d\n", minimal); //Menampilkan keluaran nilai minimal.

    return 0;
}