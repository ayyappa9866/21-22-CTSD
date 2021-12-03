/* LEETCODE SUBMISSION CODE
int search(int* nums, int numsSize, int target){
    int low,high,mid,index=-1;
    low=0;
    high=numsSize-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            index=mid;
            return index;
        }
        else if(nums[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return index;
} */
#include<stdio.h>
int search(int* nums, int numsSize, int target){
    int low,high,mid,index=-1;
    low=0;
    high=numsSize-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            index=mid;
            return index;
        }
        else if(nums[mid]<target)
            low=mid+1;
        else
            high=mid-1;
    }
    return index;
}
int main()
{
	int arrSize,ans,target;
	printf("Enter no of elements into array=");
	scanf("%d",&arrSize);
	int arr[arrSize],i;
	for(i=0;i<arrSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter target element=");
	scanf("%d",&target);
	ans=search(arr,arrSize,target);
	printf("%d",ans);
	return 0;
}
