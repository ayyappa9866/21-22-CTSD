/* LEET CODE SUBMISSION CODE
bool validMountainArray(int* arr, int arrSize){
    
    int i=0;
    while(i+1<arrSize&&arr[i]<arr[i+1])
        i++;
    if(i==0 || i==arrSize-1)
        return false;
    while(i+1<arrSize&&arr[i]>arr[i+1])
        i++;
    if(i==arrSize-1)
        return true;
    else
        return false;

} */
int validMountainArray(int* arr, int arrSize){
    
    int i=0;
    while(i+1<arrSize&&arr[i]<arr[i+1])
        i++;
    if(i==0 || i==arrSize-1)
        return 0;
    while(i+1<arrSize&&arr[i]>arr[i+1])
        i++;
    if(i==arrSize-1)
        return 1;
    else
        return 0;
} 
#include<stdio.h>
int main()
{
	int arrSize,ans;
	printf("Enter no of elements into array=");
	scanf("%d",&arrSize);
	int arr[arrSize],i;
	for(i=0;i<arrSize;i++)
	{
		scanf("%d",&arr[i]);
	}
	ans=validMountainArray(arr,arrSize);
	if(ans)
	printf("YES");
	else
	printf("NO");
	return 0;
}
