/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal kuis 1
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak 
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int satu1, dua1, tiga1, alas1, tinggi1; //Variabel untuk menampung elemen segitiga1
    int satu2, dua2, tiga2, alas2, tinggi2; //Variabel untuk menampung elemen segitiga2
    int sama1, sama2;                       //Variabel untuk menampung jenis segitiga
    double luas1, luas2;                    //Variabel untuk menampung luas segitiga
    int selisihluas1, selisihluas2;         //Variabel untuk menampung selisih luas segitiga

    //INPUT (Masukkan)
    scanf("%d %d %d", &satu1, &dua1, &tiga1); //Masukkan tiga sisi untuk segitiga pertama
    scanf("%d %d %d", &satu2, &dua2, &tiga2); //Masukkan tiga sisi untuk segitiga kedua

    /*   Kondisi untuk menentukan bentuk segitiga pertama   */
    if ((satu1 == dua1) && (dua1 == tiga1))
    {
        sama1 = 0; //Bentuk segitiga sama sisi
    }
    else if ((satu1 == dua1) || (dua1 == tiga1) || (satu1 == tiga1))
    {
        sama1 = 1; //Bentuk segitiga sama kaki
    }
    else
    {
        sama1 = 2; //Bentuk segitiga siku-siku
    }

    /*   Kondisi untuk menentukan bentuk segitiga kedua   */
    if ((satu2 == dua2) && (dua2 == tiga2))
    {
        sama2 = 0; //Bentuk segitiga sama sisi
    }
    else if ((satu2 == dua2) || (dua2 == tiga2) || (satu2 == tiga2))
    {
        sama2 = 1; //Bentuk segitiga sama kaki
    }
    else
    {
        sama2 = 2; //Bentuk segitiga siku-siku
    }

    //OUTPUT (Keluaran)
    if (sama1 == sama2) //Kondisi jika kedua segitiga sama bentuk
    {
        if (sama1 == 0) //Jika kedua segitiga sama sisi
        {
            printf("segitiga sama sisi\n");
            alas1 = satu1;                                                 //Menentukan alas segitiga pertama (karena sama sisi maka bisa sisi mana saja)
            tinggi1 = sqrt((satu1 * satu1) - ((satu1 / 2) * (satu1 / 2))); //Mencari tinggi segitiga pertama menggunakan rumus phytagoras
            alas2 = satu2;                                                 //Menentukan alas segitiga kedua (karena sama sisi maka bisa sisi mana saja)
            tinggi2 = sqrt((satu2 * satu2) - ((satu2 / 2) * (satu2 / 2))); //Mencari tinggi segitiga kedua menggunakan rumus phytagoras
        }
        else if (sama1 == 1) //Jika kedua segitiga sama kaki
        {
            printf("segitiga sama kaki\n");
            if (satu1 == dua1)
            {
                alas1 = tiga1;                                                 //Menentukan alas segitiga siku-siku pertama
                tinggi1 = sqrt((satu1 * satu1) - ((tiga1 / 2) * (tiga1 / 2))); //Mencari tinggi segitiga pertama
            }
            else if (dua1 == tiga1)
            {
                alas1 = satu1;                                               //Menentukan alas segitiga siku-siku pertama
                tinggi1 = sqrt((dua1 * dua1) - ((satu1 / 2) * (satu1 / 2))); //Mencari tinggi segitiga pertama
            }
            else
            {
                alas1 = dua1;                                                //Menentukan alas segitiga siku-siku pertama
                tinggi1 = sqrt((tiga1 * tiga1) - ((dua1 / 2) * (dua1 / 2))); //Mencari tinggi segitiga pertama
            }
            if (satu2 == dua2)
            {
                alas2 = tiga2;                                                 //Menentukan alas segitiga siku-siku kedua
                tinggi2 = sqrt((satu2 * satu2) - ((tiga2 / 2) * (tiga2 / 2))); //Mencari tinggi segitiga kedua
            }
            else if (dua2 == tiga2)
            {
                alas2 = satu2;                                               //Menentukan alas segitiga siku-siku kedua
                tinggi2 = sqrt((dua2 * dua2) - ((satu2 / 2) * (satu2 / 2))); //Mencari tinggi segitiga kedua
            }
            else
            {
                alas2 = dua2;                                                //Menentukan alas segitiga siku-siku kedua
                tinggi2 = sqrt((tiga2 * tiga2) - ((dua2 / 2) * (dua2 / 2))); //Mencari tinggi segitiga kedua
            }
        }
        else //Jika kedua segitiga siku-siku
        {
            printf("segitiga siku-siku\n");
            int miring1 = dua1, miring2 = satu2;
            alas1 = dua1;
            tinggi1 = tiga1;
            if (miring1 < dua1) //Kondisi jika sisi masukkan kedua adalah sisi miring
            {
                miring1 = dua1;
                alas1 = satu1;
                tinggi1 = tiga1;
            }
            if (miring1 < tiga1) //Masukkan ketiga yang menjadi sisi miring
            {
                alas1 = satu1;
                tinggi1 = dua1;
            }
            alas2 = dua2;
            tinggi2 = tiga2;
            if (miring2 < dua2)
            {
                miring2 = dua2;
                alas2 = satu2;
                tinggi2 = dua2;
            }
            if (miring2 < tiga2)
            {
                alas2 = satu2;
                tinggi2 = dua2;
            }
        }

        /*    Operasi hitung    */
        //Menghitung luas segitiga
        luas1 = (alas1 * tinggi1) / 2; //Untuk luas segitiga pertama
        luas2 = (alas2 * tinggi2) / 2; //Untuk luas segitiga kedua

        //Menghitung selisih luas segitiga
        selisihluas1 = luas1 - luas2; //Untuk luas segitiga pertama lebih besar
        selisihluas2 = luas2 - luas1; //Untuk luas segitiga kedua lebih besar

        //Kondisi perbandingan kedua segitiga
        if (luas1 >= luas2)
        {
            printf("segitiga pertama\n");
            printf("%d", selisihluas1);
        }
        else
        {
            printf("segitiga kedua\n");
            printf("selisih %d", selisihluas2);
        }
    }
    else
    {
        printf("tidak sama\n");
    }

    return 0;
}