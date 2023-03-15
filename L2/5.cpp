#include <stdio.h>
int main(void)
{
    int a = 0;
    double b = 0.0;
    a = b = 123 % 100 / 2.0;
    printf("%d, %lf", a, b);
    return 0;
}