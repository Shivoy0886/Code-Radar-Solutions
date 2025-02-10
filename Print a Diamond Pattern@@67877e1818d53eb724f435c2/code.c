#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,nsp;
    scanf("%d",&n);
    nsp=n;
    for(int j=0;j<n;j++){
        for(int i=0;i<nsp;i++){
            if(j<=n/2){
            printf("*");
            nsp--;
            }
            else{
                printf("*");
                nsp++;
            }
        }
        printf("\n");
    }
    return 0;
}