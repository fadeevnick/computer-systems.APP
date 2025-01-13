#include <stdio.h>

int main()
{
    int x = 500;
    int* address = &x;

    printf("x = ");
    printf("%i", x);
    printf("\n");

    printf("address = ");
    printf("%i\n", address);
    printf("%x", address);
    printf("\n");
    return 0;
}
