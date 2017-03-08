#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int b=0;
    int *a;
    int c[10];
    double d;
    for (i=0; i<=9; i++)
    {
        b++;
        c[i]=b;
        *a = b;
    }
    for (i=0; i<=9; i++)
    {
        printf("%i ", c[i]);
    }
    printf("koniec");
    return 0;
}
