#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,nsp;
    scanf("%d",&n);
    nsp=n/2;
    for(int j=0;j<n;j++){
        for(int i=0;i<nsp;i++){
            printf("*");
        }
        if(j<=n/2) nsp--;
        else nsp++;
        printf("\n");
    }
    return 0;
}