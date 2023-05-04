/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 3 
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <math.h>

typedef struct
{
    int r, x, y;
} lingkaran;

int main()
{
    lingkaran cA, cB; //Menampung tipe data variabel
    int k, k1, sisamodk2, sisamodk3, k2, k3, p;
    char c;
    double luas1, luas2, Eluas, luasA, luasB;
    double keliling1, keliling2, Ekeliling;
    double jarak;
    int djarak;

    //INPUT (masukkan)
    scanf("%d %d %d %d %d %d %d %c %d", &k, &cA.r, &cA.x, &cA.y, &cB.r, &cB.x, &cB.y, &c, &p);

    k1 = k / 100; //Untuk memisahkan ratusan menjadi angka 1
    sisamodk2 = k % 100;
    k2 = sisamodk2 / 10; //puluhan menjadi angka 2
    sisamodk3 = sisamodk2 % 10;
    k3 = sisamodk3 / 1; //... angka 3

    /*  Operasi hitungan    */
    //Luas lingkaran
    luas1 = 3.14 * (cA.r * cA.r);
    luas2 = 3.14 * (cB.r * cB.r);
    Eluas = luas1 + luas2;

    //Keliling lingkaran
    keliling1 = 3.14 * (2 * cA.r);
    keliling2 = 3.14 * (2 * cB.r);
    Ekeliling = keliling1 + keliling2;

    //Jarak
    jarak = sqrt((cA.x - cB.x) * (cA.x - cB.x) + (cA.y - cB.y) * (cA.y - cB.y));
    djarak = jarak; //Mengambil angka berupa bilangan bulat

    //Luas untuk A atau B
    luasA = (p * luas1) / 100;
    luasB = (p * luas2) / 100;

    //OUTPUT (keluaran)
    switch (k1) //Kondisi angka 1
    {
    case 1:
        printf("ELuas AB: %.2lf cm2\n", Eluas);
        break;
    case 2:
        printf("EKeliling AB: %.2lf cm\n", Ekeliling);
        break;
    case 3:
        printf("Jarak AB: %d satuan\n", djarak);
        break;
    default:
        if (c == 'A')
        {
            printf("Luas %d%% A: %.2lf cm2\n", p, luasA);
        }
        else
        {
            printf("Luas %d%% B: %.2lf cm2\n", p, luasB);
        }
        break;
    }

    switch (k2) //Kondisi angka 2
    {
    case 1:
        printf("ELuas AB: %.2lf cm2\n", Eluas);
        break;
    case 2:
        printf("EKeliling AB: %.2lf cm\n", Ekeliling);
        break;
    case 3:
        printf("Jarak AB: %d satuan\n", djarak);
        break;
    default:
        if (c == 'A')
        {
            printf("Luas %d%% A: %.2lf cm2\n", p, luasA);
        }
        else
        {
            printf("Luas %d%% B: %.2lf cm2\n", p, luasB);
        }
        break;
    }

    switch (k3) //Kondisi angka 3
    {
    case 1:
        printf("ELuas AB: %.2lf cm2\n", Eluas);
        break;
    case 2:
        printf("EKeliling AB: %.2lf cm\n", Ekeliling);
        break;
    case 3:
        printf("Jarak AB: %d satuan\n", djarak);
        break;
    default:
        if (c == 'A')
        {
            printf("Luas %d%% A: %.2lf cm2\n", p, luasA);
        }
        else
        {
            printf("Luas %d%% B: %.2lf cm2\n", p, luasB);
        }
        break;
    }

    return 0;
}