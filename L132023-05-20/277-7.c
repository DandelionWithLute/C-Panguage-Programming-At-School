#include <stdio.h>
int cpbgger(int a,int b){
    if (a > b) return a;
    if (a < b) return b;
}

int main(){
    int a,b;
    scanf("%d,%d",&a,&b);
    int res = cpbgger(a,b);
    printf("%d\n",res);
    return 0;
}