#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<n-j;i++){
            printf("  ");
        }
        for(int k=0;k<n;k++){
            printf("%d ",k);
        }
        printf("\n");
    }

    return 0;
}