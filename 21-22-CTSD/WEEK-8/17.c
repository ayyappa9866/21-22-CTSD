/* LEETCODE SUBMISSION CODE
 * Note: The returned array must be malloced, assume caller calls free().
 
int* searchRange(int* nums, int numsSize, int target, int* returnSize)
{
    *returnSize=2;
    int *ptr=(int*)malloc(2*sizeof(int));
    int low=0,high=numsSize-1,mid,res=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            res=mid;
            high=mid-1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }//while
    ptr[0]=res;
    low=0,high=numsSize-1,res=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            res=mid;
            low=mid+1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }//while
    ptr[1]=res;    
    return ptr;
} */
#include<stdio.h>
void searchRange(int* nums, int numsSize, int target)
{
    int ptr[2];
    int low=0,high=numsSize-1,mid,res=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            res=mid;
            high=mid-1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }//while
    ptr[0]=res;
    low=0,high=numsSize-1,res=-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(nums[mid]==target)
        {
            res=mid;
            low=mid+1;
        }
        else if(nums[mid]<target)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }//while
    ptr[1]=res;    
    printf("The starting and ending positions are %d and %d",ptr[0],ptr[1]);
}
int main()
{
	int n;
	printf("Enter the size of the array=");
	scanf("%d",&n);
	int arr[n],target,i;
	printf("Enter array elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("Enter the target element=");
	scanf("%d",&target);
	searchRange(arr,n,target);
	return 0;
}//main
