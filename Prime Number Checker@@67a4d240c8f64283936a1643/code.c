#include <stdio.h>

int isPrime(int num)
{
    for(int i=1;i<num;i++){
    int c=0;
        if(num%i==0)
        {
            c++;
        }
    }
    if(c==2) return 1;
    else return 0;
}
