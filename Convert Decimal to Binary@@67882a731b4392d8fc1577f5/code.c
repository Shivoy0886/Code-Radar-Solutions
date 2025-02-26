#include <stdio.h>

void decimal_to_binary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int bits[32];
    int index = 0;

    while (n > 0) {
        bits[index++] = n & 1; 
        n >>= 1;           
    }
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", bits[i]);
    }
}

int main() {
    int num;
    scanf("%d",&num);
    printf(num);
    decimal_to_binary(num);
    return 0;
}
