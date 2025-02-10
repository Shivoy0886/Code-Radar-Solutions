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
        for(int k=0;k<j+1;k++){
            printf("%d ",k+1);
        }
        printf("\n");
    }

    return 0;
}