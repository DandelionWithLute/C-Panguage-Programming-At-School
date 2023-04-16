#include <stdio.h>

int main(){
     int a[10]={20,10,66,9,40,5,6,80,3,45};
    int i;
    scanf("%d",&i);
    if (i > 0){
        for(int j=0;j<10;j++){
            printf("%d ",a[j]);
        }
        printf("\n");
    }else{
        for(int j=9;j>=0;j--){
            printf("%d ",a[j]);
        }
        printf("\n");
    }
}