#include <stdio.h>

typedef struct //Membuat tipe bentukan pecahan
{
    int pembilang;
    int penyebut;
} pecahan;

int main()
{
    pecahan a, b, c; //Membuat variabel pecahan

    //INPUT (masukkan)
    printf("Masukkan nilai pembilang dan penyebut pecahan pertama\n");
    scanf("%d %d", &a.pembilang, &a.penyebut);
    printf("Masukkan nilai pembilang dan penyebut pecahan kedua\n");
    scanf("%d %d", &b.pembilang, &b.penyebut);

    /*  Sistem Operasi  */
    if (a.penyebut == b.penyebut)
    {
        c.penyebut = a.penyebut = b.penyebut;
        c.pembilang = a.pembilang + b.pembilang;
    }
    else if (a.penyebut != b.penyebut)
    {
        c.penyebut = a.penyebut * b.penyebut;
        c.pembilang = ((c.penyebut / a.penyebut) * a.pembilang) + ((c.penyebut / b.penyebut) * b.pembilang);
    }

    //OUTPUT (keluaran)
    printf("Hasil dari pertambahan pecahan adalah:\n pembilang: %d\n penyebut: %d\n", c.pembilang, c.penyebut);

    return 0;
}