#include <stdio.h>

typedef struct
{
    int depan, belakang;
} nilai;

int main()
{
    nilai koma;
    int i, n;
    printf("Masukkan besar indeks array :\n");
    scanf("%d", &n);
    float array[n];

    for (i = 0; i < n; i++)
    {
        printf("Masukkan nilai float :\n");
        scanf("%f", &array[i]);
    }

    koma.depan = array[i];
    koma.belakang = (array[i] - koma.depan) * 100;

    for (i = 0; i < 5; i++)
    {
        if ((koma.depan % 2 == 0) && (koma.belakang % 2 == 0))
        {
            printf("%d.%d\n", koma.depan, koma.belakang);
        }
    }

    return 0;
}