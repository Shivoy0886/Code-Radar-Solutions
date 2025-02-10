#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    for(int j=0;j<n;j++){
        for(int i=0;i<n-1-j;i++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}