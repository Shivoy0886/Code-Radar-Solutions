#include<stdio.h>

int main(void){
   int n;
   scanf("%d",&n);
   int nums[n];
   for(int i=0;i<n;i++){
    scanf("%d ",&nums[i]);
   }
   for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(nums[i]==nums[j]){
                printf("%d %d\n",nums[i],nums[j]);
            }
        }
      }
}
