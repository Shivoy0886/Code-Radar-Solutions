#include<stdio.h>

int main(void){
    int n1;
    scanf("%d %d",&n1);
    int check= (char)n1 & (char)1;
    if(check==1)
        printf("Set");
    else
        printf("Set");
}