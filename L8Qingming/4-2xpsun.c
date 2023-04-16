#include <stdio.h>
int main(void)
{
    int count = 0;
    char c;
    scanf("%c", &c);
    while (c != '#')
    {
        scanf("%c", &c);
        if (c != '8')
        {
            if (c <= '7' && c >= '0')
            {
                c++;
            }

            if (c == '9')
            {
                c = '0';
            }
            if (c >= '0' && c <= '9')
            {
                count = count + 1;
            }
            printf("%c", c);
        }
        else
        {
            printf("9");
        }
    }
    printf("\n");
    return 0;
}