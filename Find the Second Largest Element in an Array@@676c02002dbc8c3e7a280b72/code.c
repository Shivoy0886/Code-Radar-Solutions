#include<stdio.h>

int main(void){
   int n;
   scanf("%d",&n);
   int nums[n];
   for(int i=0;i<n;i++){
    scanf("%d ",&nums[i]);
   }
   int largest=nums[0];
   for(int i=0;i<n;i++){
        if(nums[i]>largest){
            largest=nums[i];
        }
        }
    int sec_largest=nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]>sec_largest && nums[i]!=largest){
            sec_largest=nums[i];
        }
    }

    printf("%d\n",sec_largest);
    
}
