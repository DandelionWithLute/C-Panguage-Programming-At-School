#include <stdio.h>
int main(void)
{
    char c1 = 'A', c2 = 65;
    c1 = c1 + ('a' - 'A');
    c2 = c2 - ('a' - 'A');
    printf("c1=%c---%d,c2=%c---%d\n",c1,c1,c2,c2);
    return 0;
}