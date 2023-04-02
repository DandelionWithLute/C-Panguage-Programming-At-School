#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 1; i <= 50; i++)
    {
        if (i % 7 == 0)
        {
            sum += i;
        }
    }
    printf("%d",sum);
}