#include <stdio.h>

int main()
{
    int n, m; //Variabel untuk menampung nilai masukkan dari user.
    printf("Masukkan array pertama dan kedua :\n");
    scanf("%d %d", &n, &m); //Masukkan user untuk nilai n.

    int aoi1[n]; //Variabel untuk menampung nilai array aoi pertama.
    int aoi2[m]; //Variabel untuk menampung nilai array aoi kedua.
    int i;       //Variabel sebagai interator pengulangan.

    printf("Masukkan nilai untuk array pertama\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &aoi1[i]); //Memasukkan nilai-nilai untuk aoi pertama.
    }
    printf("Masukkan setiap nilai untuk array kedua\n");
    for (i = 0; i < m; i++)
    {
        scanf("%d", &aoi2[i]); //Memasukkan nilai-nilai untuk aoi kedua.
    }

    int maksimal = aoi1[0]; //Variabel untuk menampung nilai maksimal.
    int minimal = aoi2[0];  //... minimal.
    for (i = 1; i < n; i++)
    {
        if (maksimal < aoi1[i]) //Kondisi untuk nilai maksimal.
        {
            maksimal = aoi1[i]; //akan diisikan nilai maksimal.
        }
    }
    for (i = 1; i < m; i++)
    {
        if (minimal > aoi2[i]) //Kondisi untuk nilai minimal.
        {
            minimal = aoi2[i]; //akan diisikan nilai minimal.
        }
    }

    printf("jumlah nilai maksimal array pertama dengan nilai minimal array kedua : %d\n", maksimal += minimal); //Menampilkan keluaran hasil jumlah array pertama dan kedua.

    return 0;
}