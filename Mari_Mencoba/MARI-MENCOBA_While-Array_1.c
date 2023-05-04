#include <stdio.h>
#include <math.h>

typedef struct
{
    int alas, tinggi, sisiMiring;
} segitiga;

int main()
{
    int i, n, maks;
    scanf("%d", &n);
    segitiga siku[n];

    for (i = 0; i < n; i++)
    {
        printf("Masukkan nilai alas :\n");
        scanf("%d", siku[i].alas);
        printf("Masukkan nilai tinggi :\n");
        scanf("%d", siku[i].tinggi);
        printf("Masukkan nilai sisi miring :\n");
        scanf("%d", siku[i].sisiMiring);
    }

    maks = 0;
    i = 0;
    while ((maks < 3) && (i < n))
    {
        if ((siku[i].sisiMiring = sqrt((siku[i].alas * siku[i].alas) + (siku[i].tinggi * siku[i].tinggi))))
        {
            printf("%d\n", siku[i]);
            maks++;
        }
        i++;
    }

    return 0;
}
