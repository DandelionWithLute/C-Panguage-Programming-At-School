#include <stdio.h>
#include <math.h>
int main(void)
{
    int a = 1;
    int b = 2;
    int cache = 3;
    printf("%d,%d,%d\n", a, b, cache);
    cache = b;
    b = a;
    a = cache;
    printf("%d,%d,%d", a, b, cache);
    return 0;
}