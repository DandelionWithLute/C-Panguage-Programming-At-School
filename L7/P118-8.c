#include <stdio.h>
int main()
{
    int i = 33;
    int a;
    if (i <= 122)
    {
        printf("%c\n%d\n%o\n%x\n");
    }
    printf("Change line or not? a=0 or a=1");
    scanf("%d", &a);
    if(a==1){
        printf("\n");
    }
    i+=1;
}