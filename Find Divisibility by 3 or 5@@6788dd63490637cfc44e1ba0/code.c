#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int s1;
    scanf("%d",&s1);
    if (s1%3==0) printf("Divisible by 3");
    else if (s1%5==0) printf("Divisible by 5");
    else if (s1%5==0 && s1%3==0) printf("Divisible by Both");
    else printf("Not Divisible");
    return 0;
}