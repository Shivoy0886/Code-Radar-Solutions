#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,k=1;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<=j;i++){
            printf("%d ",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}