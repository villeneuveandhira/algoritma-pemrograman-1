#include <stdio.h>

int main()
{
    /*      Variabels       */
    int a, b, c, d, e, f; //Sebuah angka
    int ribuan;           //Jumlah ribuan

    //INPUT
    scanf("%d", &a); //Masukkan angka pertama
    scanf("%d", &b); //Masukkan angka kedua
    scanf("%d", &c); //Masukkan angka ketiga
    scanf("%d", &d); //Masukkan angka keempat
    scanf("%d", &e); //Masukkan angka kelima
    scanf("%d", &f); //Masukkan angka keenam

    /*      Kondisi (IF)     */
    if (a >= 1000) //Kondisi A
    {
        ribuan++;
    }

    if (b >= 1000) //Kondisi B
    {
        ribuan++;
    }

    if (c >= 1000) //Kondisi C
    {
        ribuan++;
    }

    if (d >= 1000) //Kondisi D
    {
        ribuan++;
    }

    if (e >= 1000) //Kondisi E
    {
        ribuan++;
    }

    if (f >= 1000) //Kondisi F
    {
        ribuan++;
    }

    //OUTPUT
    if (ribuan >= 3)
    {
        printf("ribuan 3 atau lebih\n");
    }
    else
    {
        printf("tidak valid\n");
    }

    return 0;
}