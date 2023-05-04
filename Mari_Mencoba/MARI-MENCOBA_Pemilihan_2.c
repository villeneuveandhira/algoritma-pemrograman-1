#include <stdio.h>

int main()
{
    /*      Variabels       */
    int a, b, c;

    //INPUT
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    //OUTPUT
    /*      Condition       */
    if ((a == b) && (b == c) && (a == c))
    {
        printf("segitiga sama sisi\n");
    }
    else if ((a == b) || (b == c) || (a == c))
    {
        printf("segitiga sama kaki\n");
    }
    else
    {
        printf("segitiga siku-siku\n");
    }

    return 0;
}