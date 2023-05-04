#include <stdio.h>

int main()
{
    /*      Variabels       */
    int A, B, C; //Kotak apel A, B, C

    //INPUT
    printf("Kotak A : ");
    scanf("%d", &A);
    printf("Kotak B : ");
    scanf("%d", &B);
    printf("Kotak C : ");
    scanf("%d", &C);

    //OUTPUT
    /*      Kondisi(IF)     */
    if ((A > B) && (A > C))
    {
        if (A % 2 == 0)
        {
            printf("Apel terbanyak terdapat pada kotak A dan jumlahnya genap\n");
        }
        else
        {
            printf("Apel terbanyak terdapat pada kotak A dan jumlahnya ganjil\n");
        }
    }
    else if ((B > A) && (B > C))
    {
        if (B % 2 == 0)
        {
            printf("Apel terbanyak terdapat pada kotak B dan jumlahnya genap\n");
        }
        else
        {
            printf("Apel terbanyak terdapat pada kotak B dan jumlahnya ganjil\n");
        }
    }
    else
    {
        if (C % 2 == 0)
        {
            printf("Apel terbanyak terdapat pada kotak C dan jumlahnya genap\n");
        }
        else
        {
            printf("Apel terbanyak terdapat pada kotak C dan jumlahnya ganjil\n");
        }
    }

    return 0;
}