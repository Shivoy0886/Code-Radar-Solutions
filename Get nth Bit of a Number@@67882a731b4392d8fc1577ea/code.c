#include<stdio.h>

int main(void){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int msb = n1>>n2;
    if(msb&1)
        printf("Set");
    else
        printf("Not Set");
}