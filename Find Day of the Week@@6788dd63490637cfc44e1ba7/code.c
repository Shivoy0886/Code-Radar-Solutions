#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int n1;
    scanf("%d",&n1);
    if (n1==1) printf("Monday");
    else if (n1==2) printf("Tuesday");
    else if (n1==3) printf("Wednesday");
    else if (n1==4) printf("Thursday");
    else if (n1==5) printf("Friday");
    else if (n1==6) printf("Saturday");
    else if (n1==7) printf("Sunday");
    else printf("Invalid");
    return 0;
}