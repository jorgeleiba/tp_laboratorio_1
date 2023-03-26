
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    setbuf(stdout, NULL);

    int a;
    int B;
    float c;
    char d;

    printf("el size de a es: %d\n", sizeof(a));
    printf("el size de B es: %d\n", sizeof(B));
    printf("el size de c es: %d\n", sizeof(c));
    printf("el size de d es: %d\n", sizeof(d));


    printf("el direccion de a es: %p\n", &a);
}
