#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1-j;i++){
            printf("  ");
        }
        for(int k=0;k<=2*j;k++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}