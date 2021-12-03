/* LEETCODE SUBMISSION CODE
int removeDuplicates(int* nums, int numsSize){
    int i,index=0;
    if(numsSize==0)
        return 0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=nums[index])
        {
            index++;
            nums[index]=nums[i];
        }
    }   
   return index+1;
}*/
#include<stdio.h>
int removeDuplicates(int* nums, int numsSize){
    int i,index=0;
    if(numsSize==0)
        return 0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i]!=nums[index])
        {
            index++;
            nums[index]=nums[i];
        }
    }   
   return index+1;
}
int main()
{
    int n,i,ans;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    ans=removeDuplicates(arr,n);
    for(i=0;i<ans;i++)
    {
    	printf("%d ",arr[i]);
	}
    return 0;
}
