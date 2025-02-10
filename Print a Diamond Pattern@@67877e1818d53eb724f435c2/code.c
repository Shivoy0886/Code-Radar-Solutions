#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,nsp=n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<nsp-1;i++){
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