#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,no=1;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<n-j;i++){
            printf(" ");
        }
        for(int k=0;k<=;k++){
            printf("%d",no);
        }if(i<n/2) no++;
        else no--;
        printf("\n");
    }

    return 0;
}