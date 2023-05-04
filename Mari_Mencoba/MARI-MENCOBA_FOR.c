#include <stdio.h>

int main()
{
    int n; //Menampung variabel nilai masukkan user

    //INPUT (masukkan)
    scanf("%d", &n);

    //OUTPUT
    for (int baris1 = 1; baris1 <= n; baris1++) //Pola untuk baris pertama
    {
        for (int kolom1 = n - baris1; kolom1 >= 1; kolom1--)
        {
            printf(" ");
        }
        for (int kolom2 = 1; kolom2 <= baris1; kolom2++)
        {
            printf("*");
        }
        for (int kolom3 = 2; kolom3 <= baris1; kolom3++)
        {
            printf("*");
        }
        for (int kolom4 = n - baris1; kolom4 >= 1; kolom4--)
        {
            printf(" ");
        }
        for (int kolom5 = 1; kolom5 <= n + 1; kolom5++)
        {
            printf("*");
        }
        for (int kolom6 = n - 1; kolom6 >= baris1; kolom6--)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int baris2 = 1; baris2 <= n - 1; baris2++) //Pola untuk baris kedua
    {
        for (int kolom1 = 1; kolom1 <= baris2; kolom1++)
        {
            printf(" ");
        }
        for (int kolom2 = n - 1; kolom2 >= baris2; kolom2--)
        {
            printf("*");
        }
        for (int kolom3 = n - 2; kolom3 >= baris2; kolom3--)
        {
            printf("*");
        }
        for (int kolom4 = 1; kolom4 <= baris2; kolom4++)
        {
            printf(" ");
        }
        for (int kolom5 = 1; kolom5 <= n + 1; kolom5++)
        {
            printf("*");
        }
        for (int kolom6 = 1; kolom6 <= baris2; kolom6++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}