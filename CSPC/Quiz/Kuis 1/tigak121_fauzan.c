/* 
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal kuis 1
    dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/
#include <stdio.h>
#include <math.h>

int main()
{
    int pertama1, pertama2, pertama3, alas1, tinggi1;   //Variable setiap sisi segitiga, alas dan tinggi pertama
    int kedua1, kedua2, kedua3, alas2, tinggi2;         //Variable setiap sisi segitiga, alas dan tinggi kedua
    int tipe1, tipe2;                                   //Setiap nomor menyatakan jenis segitiga berbeda
    int selisih_luas;                                   //Ya selisih luas apalagi emg
    double luas1, luas2;                                //Luas segitiga 1 dan 2 yaelah

    scanf("%i %i %i", &pertama1, &pertama2, &pertama3); //Scanf sesuai format dari soal
    scanf("%i %i %i", &kedua1, &kedua2, &kedua3);       //Sama ini juga ngikutin format

    if (pertama1 == pertama2 && pertama2 == pertama3)   //Jika ketiga sisi segitiga pertama sama
    {
        tipe1 = 0;  //Segitiga sama sisi
    }
    else if (pertama1 == pertama2 || pertama2 == pertama3 || pertama3 == pertama1)  //Jika hanya dua sisi sama
    {
        tipe1 = 1;  //Segitiga sama kaki
    }
    else    //Di soal dijelaskan hanya ada 3 tipe segitiga jadi otomatis...
    {
        tipe1 = 2; //Segitiga siku-siku
    }

    if (kedua1 == kedua2 && kedua2 == kedua3)   //Ini juga sama aja cuma buat segitiga kedua
    {
        tipe2 = 0;
    }
    else if (kedua1 == kedua2 || kedua2 == kedua3 || kedua3 == kedua1)
    {
        tipe2 = 1;
    }
    else
    {
        tipe2 = 2;
    }
    
    if (tipe1 == tipe2) //Jika tipe segitiganya sama, jadi ribet ARRGFGGFLKAT3430QWBGBOAIAS7TDTV0QWWG
    {
        if (tipe1 == 0)         //Jika kedua segitiga sama sisi
        {
            printf("segitiga sama sisi\n");
            alas1 = pertama1;                                                           //Alas bisa sisi mana saja
            tinggi1 = sqrt((pertama1 * pertama1) - ((pertama1 / 2) * (pertama1 / 2)));  //Ini rumus pitagoras diubah dikit
            alas2 = kedua1;                                                             //Sama aja cuma buat segitiga kedua
            tinggi2 = sqrt((kedua1 * kedua1) - ((kedua1 / 2) * (kedua1 / 2)));
        }
        else if (tipe1 == 1)    //Jika kedua segitiga sama kaki
        {
            printf("segitiga sama kaki\n");
            if (pertama1 == pertama2)       //Jika sisi 1 dan sisi 2 sama
            {
                alas1 = pertama3;                                                           //Sisi yang beda sendiri akan jadi alas
                tinggi1 = sqrt((pertama1 * pertama1) - ((pertama3 / 2) * (pertama3 / 2)));  //Sama aja kaya sebelumnya, pitagoras
            }
            else if (pertama2 == pertama3)  //Jika sisi 2 dan sisi 3 sama, yang bawah gausah dijelasin lagi ya
            {
                alas1 = pertama1;
                tinggi1 = sqrt((pertama2 * pertama2) - ((pertama1 / 2) * (pertama1 / 2)));
            }
            else
            {
                alas1 = pertama2;
                tinggi1 = sqrt((pertama3 * pertama3) - ((pertama2 / 2) * (pertama2 / 2)));
            }
            if (kedua1 == kedua2)           //Nah ini hanya mengulang proses yang sama, cuma ini segitiga kedua
            {
                alas2 = kedua3;
                tinggi2 = sqrt((kedua1 * kedua1) - ((kedua3 / 2) * (kedua3 / 2)));
            }
            else if (kedua2 == kedua3)
            {
                alas2 = kedua1;
                tinggi2 = sqrt((kedua2 * kedua2) - ((kedua1 / 2) * (kedua1 / 2)));
            }
            else
            {
                alas2 = kedua2;
                tinggi2 = sqrt((kedua3 * kedua3) - ((kedua2 / 2) * (kedua2 / 2)));
            }
        }
        else                    //Jika kedua segitiga sama kaki
        {
            printf("segitiga siku-siku\n");
            int miring1 = pertama1, miring2 = kedua1;   //Asumsikan bahwa sisi pertama setiap segitiga itu sisi miring (paling panjang)
            alas1 = pertama2;           //Berarti alas dan tinggi adalah 2 sisi sisanya, urutan sebenarnya tidak berpengaruh
            tinggi1 = pertama3;
            if (miring1 < pertama2)     //Nah jika ternyata sisi kedua merupakan sisi miring (paling panjang)
            {
                miring1 = pertama2;     //Aduh ibu ngerti kan maksud saya, masih ada satu soal lagi ya Allah
                alas1 = pertama1;
                tinggi1 = pertama3;
            }
            if (miring1 < pertama3)
            {
                alas1 = pertama1;
                tinggi1 = pertama2;
            }
            alas2 = kedua2;             //Proses yang sama untuk segitiga kedua
            tinggi2 = kedua3;
            if (miring2 < kedua2)
            {
                miring2 = kedua2;
                alas2 = kedua1;
                tinggi2 = kedua2;
            }
            if (miring2 < kedua3)
            {
                alas2 = kedua1;
                tinggi2 = kedua2;
            }
        }

        luas1 = alas1 * tinggi1 / 2;    //Luas kedua segitiga dihitung 
        luas2 = alas2 * tinggi2 / 2;
        
        if (luas1 >= luas2)     //Pokoknya disoal kriterianya seperti ini
        {
            printf("segitiga pertama\n");
            selisih_luas = luas1 - luas2;
        }
        else
        {
            printf("segitiga kedua\n");
            selisih_luas = luas2 - luas1;
        }

        printf("selisih %i\n", selisih_luas);
    }
    else    //Jika tipe segitiga nya beda, simpel banget ya Allah
    {
        printf("tidak sama\n");
    }

    return 0;   //Ya sekian ibu, maaf komennya asal2an saya masih harus mengerjakan soal yang satunya
}