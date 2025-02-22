#include<stdio.h>

int main(void){
    int n1;
    scanf("%d",&n1);
    int check=n1 ^ 1;
    if(check==0)
        printf("Set");
    else
        printf("Not Set");
}