#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int m;
    scanf("%d",&m);
    if(m>90) printf("A");
    else if(m>80) printf("B");
    else if(m>70) printf("C");
    else if(m>60) printf("D");
    else if(m<60) printf("F");
    
    return 0;
}