#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int age;
    scanf("%d",&age);
    if (age>=18) printf("Eligible");
    if (age<18) printf("NotEligible");
    return 0;
}