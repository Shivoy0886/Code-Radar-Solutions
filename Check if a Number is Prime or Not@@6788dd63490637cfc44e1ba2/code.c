#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(n%i==0){
            c++;
        }
    }
        if(c==2) printf("Prime");
        else printf("Not Prime");
    return 0;
}