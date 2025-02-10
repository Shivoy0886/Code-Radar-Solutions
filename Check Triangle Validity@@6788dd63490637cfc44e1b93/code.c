#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1,s2,s3;
    scanf("%d",&s1,&s2,&s3);
    if((s1+s2)>s3 || (s2+s3)>s1 || (s1+s3)>s3) printf("Valid");
    else printf("Invalid");
    
    return 0;
}