#include<stdio.h>

int main(void){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    n1=n1^(1<<n2);
    printf("%d",n1);
    
}