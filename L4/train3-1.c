#include <stdio.h>
int main(void)
{
    char ch = 'A';
    // scanf("%d",a);
    // switch (ch)
    // {
    // case ch >= 'A' && ch <='Z':
    //     ch += 32;
    //     break;

    // default:
    //     break;
    // }
    if(ch >= 'A' && ch <='Z'){
        ch+=32;
    } else {
        ch-=32;
    }
    printf("%c", ch);
}