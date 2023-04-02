#include <stdio.h>
int main()
{
    int i = 2;
    int j;
    if (i < 100)
    {
        j = i * i;
        if (i == j % 10 || i == j % 100)
        {
            printf("%d", i);
        }
        i += 1;
    }
}