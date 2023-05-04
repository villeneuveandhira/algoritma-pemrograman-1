#include <stdio.h>

int main()
{
    /*      Variabels       */
    char ca, cb, cc, cd, ce, cf; //Sebuah karakter

    //INPUT
    scanf("%c %c %c %c %c %c", &ca, &cb, &cc, &cd, &ce, &cf);

    /*      Penanda     */
    int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0;

    /*      Kondisi (IF)      */
    if ((ca != 'a') && (ca != 'i') && (ca != 'u') && (ca != 'e') && (ca != 'o'))
    {
        a = 1; //Kondisi konsonan karakter pertama
    }

    if ((cb == 'a') || (cb == 'i') || (cb == 'u') || (cb == 'e') || (cb == 'o'))
    {
        b = 1; //Kondisi vokal karakter kedua
    }

    if ((cc != 'a') && (cc != 'i') && (cc != 'u') && (cc != 'e') && (cc != 'o'))
    {
        c = 1; //Kondisi konsonan karakter ketiga
    }

    if ((cd == 'a') || (cd == 'i') || (cd == 'u') || (cd == 'e') || (cd == 'o'))
    {
        d = 1; //Kondisi vokal karakter keempat
    }

    if ((ce != 'a') && (ce != 'i') && (ce != 'u') && (ce != 'e') && (ce != 'o'))
    {
        e = 1; //Kondisi konsonan karakter kelima
    }

    if ((cf == 'a') || (cf == 'i') || (cf == 'u') || (cf == 'e') || (cf == 'o'))
    {
        f = 1; //Kondisi vokal karakter keenam
    }

    //OUTPUT
    if ((a == 1) && (b == 1) && (c == 1) && (d == 1) && (e == 1) && (f == 1))
    {
        printf("kombinasi valid\n");
    }
    else if ((a == 0) && (b == 0) && (c == 0) && (d == 0) && (e == 0) && (f == 0))
    {
        printf("kombinasi valid\n");
    }
    else
    {
        printf("kombinasi tidak valid\n");
    }

    return 0;
}