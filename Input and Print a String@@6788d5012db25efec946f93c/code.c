#include <stdio.h>

int main() {
    char c;
    int i=0;
    while (c!='/0'){
        scanf("%c",&c[i]);
        i++;
    }
    printf("You entered:");
    int j=0;
    while(c!='/0'){
        printf("%c",c[j]);
        j++;
    }
    return 0;
}