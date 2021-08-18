#include <stdio.h>

int main()
{
    int a = 10;
    short b = 20;
    long c = 3;
    float d = 40.0;
    double e = 50.0;

    printf("a = %d    sizeof(a) = %d \n", a, sizeof(a));
    printf("b = %d    sizeof(b) = %d \n", b, sizeof(b));
    printf("c = %d    sizeof(c) = %d \n", c, sizeof(c));
    printf("d = %d    sizeof(d) = %d \n", d, sizeof(d));
    printf("e = %d    sizeof(e) = %d \n", e, sizeof(e));
}
