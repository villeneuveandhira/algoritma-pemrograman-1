/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 2 
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main()
{
    /*      Variabels       */
    char a, b, c, d; //Huruf
    int n, m;        //Angka

    //INPUT
    scanf(" %c %c %c %c", &a, &b, &c, &d);
    scanf("%d %d", &n, &m);

    /*      Penanda      */
    int v = 0; //Vokal

    /*      Syarat Vokal/non-Vokal      */
    //Untuk a
    if ((a == 'A') || (a == 'I') || (a == 'U') || (a == 'E') || (a == 'O'))
    {
        v += 1; //Kondisi vokal karakter pertama
    }

    //Untuk b
    if ((b == 'A') || (b == 'I') || (b == 'U') || (b == 'E') || (b == 'O'))
    {
        v += 1; //Kondisi vokal karakter kedua
    }

    //Untuk c
    if ((c == 'A') || (c == 'I') || (c == 'U') || (c == 'E') || (c == 'O'))
    {
        v += 1; //Kondisi vokal karakter ketiga
    }

    //Untuk d
    if ((d == 'A') || (d == 'I') || (d == 'U') || (d == 'E') || (d == 'O'))
    {
        v += 1; //Kondisi vokal karakter keempat
    }

    //OUTPUT
    if (v == 2)
    {
        if ((n + m) % 2 == 0)
        {
            printf("Riddle Stone Acquired! Everybody comes home\n");
        }
        else
        {
            printf("You are unworthy, for you cannot riddle me\n");
        }
    }
    else if (v > 2)
    {
        if ((n + m) % 2 != 0)
        {
            printf("Riddle Stone Acquired! Everybody comes home\n");
        }
        else
        {
            printf("You are unworthy, for you cannot riddle me\n");
        }
    }
    else if (v < 2)
    {
        if ((n + m) >= 14)
        {
            printf("Riddle Stone Acquired! Everybody comes home\n");
        }
        else
        {
            printf("You are unworthy, for you cannot riddle me\n");
        }
    }
    else
    {
        printf("You are unworthy, for you cannot riddle me\n");
    }

    return 0;
}