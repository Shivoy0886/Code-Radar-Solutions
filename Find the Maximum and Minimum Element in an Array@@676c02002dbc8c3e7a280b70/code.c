#include<stdio.h>

int main(void){
   int n;
   scanf("%d",&n);
   int nums[n];
   for(int i=0;i<n;i++){
    scanf("%d ",&nums[i]);
   }
   int largest=nums[0];
   int smallest=nums[0];
   for(int i=0;i<n;i++){
        if(nums[i]>largest){
         largest=nums[i];
        }
        if(nums[i]<smallest){
         smallest=nums[i];
       }
      }
      printf("%d %d\n",largest,smallest);
}
