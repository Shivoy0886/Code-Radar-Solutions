#include<stdio.h>

int main(void){
   int n;
   scanf("%d",&n);
   int nums[n];
   for(int i=0;i<n;i++){
    scanf("%d ",&nums[i]);
   }
   int even=0,odd=0;
   for(int i=0;i<n;i++){
        if(nums[i]%2==0){
            even++;
        }
        else{
            od++;
       }
      }
      printf("%d %d\n",even,odd);
}
