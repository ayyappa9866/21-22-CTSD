/*LEETCODE SUBMISSION CODE


double findMedianSortedArrays(int* nums1, int m, int* nums2, int n)
{
    
    if(n<m)
    {
        return findMedianSortedArrays(nums2,n,nums1,m); 
    }
    
    int finalmid=(n+m+1)/2;
    int low=0;
    int high=m;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int sizea=mid;
        int sizeb=finalmid-sizea;
        int lefta=(sizea>0)?nums1[sizea-1]:INT_MIN;
        int righta=(sizea<m)?nums1[sizea]:INT_MAX;
        int leftb=(sizeb>0)?nums2[sizeb-1]:INT_MIN;
        int rightb=(sizeb<n)?nums2[sizeb]:INT_MAX;
        if((lefta<=rightb)&&(leftb<=righta))
        {
            int max=(lefta>leftb)?lefta:leftb;
            if((m+n)%2==0)
            {
                int min=(righta<rightb)?righta:rightb;
                return (max+min)/2.0;
            }
            else
            {
                return max;
            }
        }
        else if(lefta>rightb)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
        }
    return 0.0;
} */
#include<stdio.h>
#include<limits.h>
double findMedianSortedArrays(int* nums1, int m, int* nums2, int n)
{
    
    if(n<m)
    {
        return findMedianSortedArrays(nums2,n,nums1,m); 
    }
    
    int finalmid=(n+m+1)/2;
    int low=0;
    int high=m;
    while(low<=high)
    {
        int mid=(low+high)/2;
        int sizea=mid;
        int sizeb=finalmid-sizea;
        int lefta=(sizea>0)?nums1[sizea-1]:INT_MIN;
        int righta=(sizea<m)?nums1[sizea]:INT_MAX;
        int leftb=(sizeb>0)?nums2[sizeb-1]:INT_MIN;
        int rightb=(sizeb<n)?nums2[sizeb]:INT_MAX;
        if((lefta<=rightb)&&(leftb<=righta))
        {
            int max=(lefta>leftb)?lefta:leftb;
            if((m+n)%2==0)
            {
                int min=(righta<rightb)?righta:rightb;
                return (max+min)/2.0;
            }
            else
            {
                return max;
            }
        }
        else if(lefta>rightb)
        {
            high=mid-1;
        }
        else
        {
            low=mid+1;
        }
        
        }
    return 0.0;
}
int main()
{
	int a[]={1,3};
	int b[]={2};
	int m=sizeof(a)/sizeof(int);
	int n=sizeof(b)/sizeof(int);
	printf("%lf",findMedianSortedArrays(a,m,b,n));
	return 0;
}
