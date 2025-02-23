#include<stdio.h>

int main(void){
   int n;
   scanf("%d",&n);
   int nums[n];
   for(int i=0;i<n;i++){
    scanf("%d ",&nums[i]);
   }
   int largest=marks[0];
   int smallest=marks[0];
   for(int i=0;i<n;i++){
        if(marks[i]>largest){
         largest=marks[i];
        }
        if(marks[i]<smallest){
         smallest=marks[i];
       }
      }
      printf("%d %d\n",lsrgest,smallest);
}