#include<stdio.h>

int main(void){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int msb = n1<<(n2-1);
    printf("%d",msb^1);
}