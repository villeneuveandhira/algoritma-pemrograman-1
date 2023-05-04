#include <stdio.h>

typedef struct //Membuat tipe bentukan
{
    int nim, nilai;
} mahasiswa;

int main()
{
    mahasiswa a, b, c; //Membuat variabel

    //INPUT (masukkan)
    printf("Masukkan NIM dan nilai mahasiswa a:\n");
    scanf("%d %d", &a.nim, &a.nilai);
    printf("Masukkan NIM dan nilai mahasiswa b:\n");
    scanf("%d %d", &b.nim, &b.nilai);
    printf("Masukkan NIM dan nilai mahasiswa c:\n");
    scanf("%d %d", &c.nim, &c.nilai);

    //OUTPUT (keluaran)
    /* Condition */
    if ((a.nilai > b.nilai) && (a.nilai > c.nilai))
    {
        printf("Mahasiswa dengan nilai terbesar adalah mahasiswa NIM %d yaitu %d\n", a.nim, a.nilai);
    }
    if ((b.nilai > a.nilai) && (b.nilai > c.nilai))
    {
        printf("Mahasiswa dengan nilai terbesar adalah mahasiswa NIM %d yaitu %d\n", b.nim, b.nilai);
    }
    if ((c.nilai > a.nilai) && (c.nilai > b.nilai))
    {
        printf("Mahasiswa dengan nilai terbesar adalah mahasiswa NIM %d yaitu %d\n", c.nim, c.nilai);
    }

    return 0;
}