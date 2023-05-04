#include <stdio.h>

typedef struct
{
    int satu, dua, tiga;
    char nilai;
} operasi;

int main()
{
    operasi i;
    int h;

    //INPUT (masukkan)
    scanf("%d %d %d", &i.satu, &i.dua, &i.tiga);
    scanf(" %c", &i.nilai);

    /* Kondisi */
    switch (i.nilai)
    {
    case 'A':
        h = (i.satu * i.dua) + (i.dua * i.tiga);
        break;
    case 'B':
        h = (i.satu * i.dua) / i.tiga;
        break;
    case 'C':
        h = (i.dua - i.tiga) * i.satu;
        break;
    default:
        h = (i.satu + i.dua) - i.tiga;
        break;
    }

    //OUTPUT (keluaran)
    printf("%d", h);

    return 0;
}