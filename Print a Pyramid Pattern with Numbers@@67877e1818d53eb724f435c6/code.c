#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,nsp,nst;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            printf("%d",i);
        }
        printf("\n");
    }
    
    return 0;
}