#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        char c='A';
        for(int i=0;i<=j;i++){
            printf("%c ",c);
            c++;
        }
        printf("\n");
    }
    return 0;
}