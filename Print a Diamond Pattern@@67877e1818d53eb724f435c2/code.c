#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,nsp,nst;
    scanf("%d",&n);
    nsp=n/2;
    nst=1;
    n=n*2-1;
    for(int j=0;j<n;j++){
        for(int i=0;i<nsp;i++){
            printf(" ");
        }
        if(j<n/2) nsp--;
        else nsp++;
        for(int k=0;k<nst;k++){
            printf("*");
        }
        if(j<n/2) nst+=2;
        else nst-=2;
        printf("\n");
    }
    return 0;
}