#include <stdio.h>
int main(void)
{
    char ch = '8';
    int a;
    // scanf("%d",a);
    // switch (ch)
    // {
    // case ch >= 'A' && ch <='Z':
    //     ch += 32;
    //     break;

    // default:
    //     break;
    // }
    if (ch >= '0' && ch <= '9')
    {
        a = ch - '0';
    }
    else
    {
        a = a;
    }
    printf("%d", a);
}