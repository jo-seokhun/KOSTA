#include <stdio.h>

int main()
{
    int a = 10;
    short b = 20;
    long c = 3;
    float d = 0.7;
    double e = 1.414;
    char f = 'a';
    
    

    printf("a = %d    sizeof(a) = %d \n", a, sizeof(a));
    printf("b = %d    sizeof(b) = %d \n", b, sizeof(b));
    printf("c = %d    sizeof(c) = %d \n", c, sizeof(c));
    printf("d = %f    sizeof(d) = %d \n", d, sizeof(d)); 
    printf("e = %f    sizeof(e) = %d \n", e, sizeof(e));
    printf("f = %c    sizeof(f) = %d ", f, sizeof(f));
}

//sizeof함수는 byte수를 계산해주는 것이므로 정수 = 무조건 %d 해야함
