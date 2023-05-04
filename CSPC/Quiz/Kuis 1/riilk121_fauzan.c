/* 
    Saya Achmad Fauzan NIM 2108061 mengerjakan soal kuis 1 nomor 2
    dalam mata kuliah algoritma dan pemrograman 1 untuk keberkahanNya
    maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan.
    Aamiin.
*/
#include <stdio.h>

int main()
{
    double pertama, kedua, ketiga, keempat; //Empat variable double untuk menerima input
    int awal1, awal2;                       //Dua variable yang akan ditukar pertama
    int akhir1, akhir2;                     //Dua variable yang akan ditukar kedua
    int depan1, depan2;                     //Dua variable untuk menampung angka di depan koma saat penukaran 
    double belakang1, belakang2;            //Dua variable untuk menampung angka di belakang koma saat penukaran
    double awal1_value, awal2_value;        //Dua variable untuk menampung sementara bilangan yang akan ditukar
    double akhir1_value, akhir2_value;      //Tumben juga saya nulis serinci ini hmmmm

    scanf("%lf", &pertama);             //Kumpulan scanf sesuai permintaan dari soal
    scanf("%lf", &kedua);
    scanf("%lf", &ketiga);
    scanf("%lf", &keempat);
    scanf("%i %i", &awal1, &awal2);
    scanf("%i %i", &akhir1, &akhir2);

    switch (awal1)                  //Kumpulan switch untuk menentukan bilangan keberapa yang akan ditukar
    {
        case 1:
            awal1_value = pertama;  //Ini artinya bilangan pertama adalah bilangan yang akan ditukar pertama
        break;
        case 2:
            awal1_value = kedua;    //Ini artinya bilangan kedua yang akan ditukar pertama
        break;
        case 3:
            awal1_value = ketiga;   //Dan seterusnya
        break;
        default:
            awal1_value = keempat;
        break;
    }
    switch (awal2)                  //awal1 akan ditukar dengan awal2
    {
        case 1:
            awal2_value = pertama;  //Ini artinya bilangan pertama adalah bilangan LAIN yang akan ditukar pertama
        break;
        case 2:
            awal2_value = kedua;    //Dan seterusnya
        break;
        case 3:
            awal2_value = ketiga;
        break;
        default:
            awal2_value = keempat;
        break;
    }
    switch (akhir1)                 //akhir1 akan ditukar dengan akhir2
    {
        case 1:
            akhir1_value = pertama; //Bilangan pertama adalah bilangan yang akan ditukar kedua
        break;
        case 2:
            akhir1_value = kedua;   //Dan seterusnya
        break;
        case 3:
            akhir1_value = ketiga;
        break;
        default:
            akhir1_value = keempat;
        break;
    }
    switch (akhir2)
    {
        case 1:
            akhir2_value = pertama; //Bilangan pertama adalah bilangan LAIN yang akan ditukar kedua
        break;
        case 2:
            akhir2_value = kedua;   //Dan... ya ibu ngerti lah
        break;
        case 3:
            akhir2_value = ketiga;
        break;
        default:
            akhir2_value = keempat;
        break;
    }
    
    //Nah disini baru mulai ditukar

    depan1 = awal1_value;               //Menyimpan angka didepan koma dari bilangan yang satu. Bingung banget ini jelasinnya ibu hehe
    belakang1 = awal1_value - depan1;   //Mendapat 2 angka di belakang koma (0.XX)
    awal1_value = depan1;               //Mengubah value awal sehingga hanya tersisa angka di depan koma

    depan2 = awal2_value;               //Sama aja ini untuk bilangan yang satunya
    belakang2 = awal2_value - depan2;
    awal2_value = depan2;

    awal1_value += belakang2;           //Menukar antara angka di depan dan di belakang koma
    awal2_value += belakang1;           //Ini baru 2 angka pertama

    depan1 = akhir1_value;              //Selanjutnya ini untuk menukar dua angka sisanya
    belakang1 = akhir1_value - depan1;  //Variable depan dan belakang hanya digunakan sementara jadi.. ya gitu lah ibu saya ngantuk
    akhir1_value = depan1;

    depan2 = akhir2_value;
    belakang2 = akhir2_value - depan2;
    akhir2_value = depan2;

    akhir1_value += belakang2;          //Ya ini setelah copy paste dan ganti nama, 2 variable terakhir berhasil ditukar juga
    akhir2_value += belakang1;

    switch (awal1)                      //Nah ini kumpulan switch untuk mengembalikan value yang sudah ditukar ke variable awal
    {
        case 1:
            pertama = awal1_value;      //Hoaaahmm
        break;
        case 2:
            kedua = awal1_value;
        break;
        case 3:
            ketiga = awal1_value;
        break;
        default:
            keempat = awal1_value;
        break;
    }
    switch (awal2)
    {
        case 1:
            pertama = awal2_value;
        break;
        case 2:
            kedua = awal2_value;
        break;
        case 3:
            ketiga = awal2_value;
        break;
        default:
            keempat = awal2_value;
        break;
    }
    switch (akhir1)
    {
        case 1:
            pertama = akhir1_value;
        break;
        case 2:
            kedua = akhir1_value;
        break;
        case 3:
            ketiga = akhir1_value;
        break;
        default:
            keempat = akhir1_value;
        break;
    }
    switch (akhir2)
    {
        case 1:
            pertama = akhir2_value;
        break;
        case 2:
            kedua = akhir2_value;
        break;
        case 3:
            ketiga = akhir2_value;
        break;
        default:
            keempat = akhir2_value;
        break;
    }

    printf("%.2lf\n", pertama);     //Kumpulan printf sesuai urutan awal input
    printf("%.2lf\n", kedua);       //Setelah googling saya tahu cara menampilkan double hanya dengan 2 angka dibelakang koma
    printf("%.2lf\n", ketiga);
    printf("%.2lf\n", keempat);

    return 0;   //Sekian ibu saya mau bobo dulu
}