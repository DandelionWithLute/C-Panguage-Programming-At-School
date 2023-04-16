#include<stdio.h>
int main(){
    int inp;
    scanf("%d",&inp);
    inp += 1;
    for (int i = 0 ; i < inp;i++){
        for (int j = 0; j < i; j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}