/*
    Saya Villeneuve Andhira Suwandhi NIM 2108067 mengerjakan soal tugas praktikum 5
    dalam mata kuliah Algoritma dan Pemrograman 1 untuk keberkahanNya maka saya tidak
    melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
*/

#include <stdio.h>

int main()
{
    int i = 0, j = 0; // Variabel untuk interator pengulangan.
    int n, m;         // Variabel untuk menampung masukkan user.

    scanf("%d", &n);
    char x[n]; // Deklarasi array Techi.

    for (i = 0; i < n; i++)
    {
        scanf(" %c", &x[i]); // Masukkan untuk tiap indeks.
    }

    scanf("%d", &m);
    char y[m]; // Deklarasi array Carla.

    for (i = 0; i < m; i++)
    {
        scanf(" %c", &y[i]); // Masukkan untuk tiap indeks.
    }

    int sejenis = 0, beda = 0; // Variabel untuk sejenis/beda.
    for (i = 0; i < n; i++)    // Pengulangan untuk mencocokkan kesamaan kartu mereka.
    {
        if (x[i] == 'A')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '1') // Jika kartu beda jenis.
                {
                    beda++;
                }
                else
                {
                    sejenis++; // Jika kartu sejenis.
                }
            }
        }
        else if (x[i] == '1')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'A')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'B')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '2')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '2')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'B')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'C')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '3')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '3')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'C')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'D')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '4')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '4')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'D')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'E')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '5')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '5')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'E')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'F')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '6')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '6')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'F')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'G')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '7')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '7')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'G')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'H')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '8')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '8')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'H')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        if (x[i] == 'I')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == '9')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
        else if (x[i] == '9')
        {
            for (j = 0; j < m; j++)
            {
                if (y[j] == 'I')
                {
                    beda++;
                }
                else
                {
                    sejenis++;
                }
            }
        }
    }

    if ((beda == n) && (beda == m)) // Jika pilihan mereka berbeda tetapi jumlah dan seluruh kartunya cocok, artinya mereka sama-sama mencintai.
    {
        if ((n == m)) // Jika kartu yang diambil Techi dan Carla sama.
        {
            for (i = 0; i < n; i++)
            {
                printf("%c", x[i]); // Tampilan kartu secara selang-seling,
                printf(" ");
                printf("%c", y[i]); // dari kartu Techi dan diakhiri kartu Carla.
                if (i < n - 1)
                {
                    printf(" "); // Tidak ada spasi setelah karakter terakhir. Sebelum berakhir ditambah spasi.
                }
            }
            printf("\n");
        }

        printf("Nilai kartu mereka cocok,\n");
        printf("Carla menyukai balik Techi.\n");
    }

    else if ((sejenis >= 1) && (beda == 0)) // Jika ternyata pilihan mereka sejenis (baik jumlah kartu sama maupun berbeda), artinya mereka bersaudara. Oh tidak!
    {
        if ((n == m)) // Jika kartu yang diambil Techi dan Carla sama.
        {
            for (i = 0; i < n; i++)
            {
                printf("%c", x[i]); // Tampilan kartu secara selang-seling,
                printf(" ");
                printf("%c", y[i]); // dari kartu Techi dan diakhiri kartu Carla.
                if (i < n - 1)
                {
                    printf(" "); // Tidak ada spasi setelah karakter terakhir. Sebelum berakhir ditambah spasi.
                }
            }
            printf("\n");
        }

        printf("Kartu mereka sejenis,\n");
        printf("ternyata mereka bersaudara!\n");
    }

    else // Jika pilihan dan jumlah atau kecocokan kartu mereka berbeda, artinya Carla tidak mencintainya.
    {
        if (n == m) // Jika kartu yang diambil Techi dan Carla sama.
        {
            for (i = 0; i < n; i++)
            {
                printf("%c", x[i]); // Tampilan kartu secara selang-seling,
                printf(" ");
                printf("%c", y[i]); // dari kartu Techi dan diakhiri kartu Carla.
                if (i < n - 1)
                {
                    printf(" "); // Tidak ada spasi setelah karakter terakhir. Sebelum berakhir ditambah spasi.
                }
            }
            printf("\n");
        }

        printf("Nilai kartu mereka tidak cocok,\n");
        printf("Carla tidak menyukai Techi.\n");
    }

    return 0;
}