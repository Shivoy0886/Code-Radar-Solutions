#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n;
    scanf("%d",&n);
    for(int j=0;j<n;j++){
        for(int i=0;i<=j;i++){
            if(j%2!=0){
                if(i%2==0){
                    printf("1 ");
                }
                
            }
            else printf("0 ");
        }
        printf("\n");
    }

    return 0;
}