#include <stdio.h>

int main()
{
    /*      Variabels       */
    float bil; //Bilangan float
    int a, b;

    //INPUT
    scanf("%f", &bil);
    a = bil;             //Bilangan depan float
    b = (bil - a) * 100; //Bilangan belakang float

    /*      Condition       */
    if (a % b == 0)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }

    return 0;
}