#include <stdio.h>

int main()
{
    /*      Variabels       */
    int a, b; //Bilangan Pertama dan Kedua
    int kali, tambah;

    //INPUT
    scanf("%d", &a);
    scanf("%d", &b);

    /*      Operator        */
    kali = a * b;
    tambah = a + b;

    //OUTPUT
    /*      Condition       */
    if ((a % 2 != 0) && (b % 2 != 0))
    {
        printf("%d\n", kali);
    }
    else if ((a % 2 == 0) && (b % 2 == 0))
    {
        printf("%d\n", tambah);
    }
    else
    {
        printf("%d %d\n", a, b);
    }

    return 0;
}