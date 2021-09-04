#include<stdio.h>
int calProduct(int*);// int ptr[4]
int calProduct(int *ptr)// int ptr[4]
{
	int product=1;
	/*product=(*(ptr+0))%2==1?product*(*(ptr+0)):product;
	  product=(*(ptr+1))%2==1?product*(*(ptr+1)):product;
	  product=(*(ptr+2))%2==1?product*(*(ptr+2)):product;
	  product=(*(ptr+3))%2==1?product*(*(ptr+3)):product; */
	product=ptr[0]%2==1?product*ptr[0]:product;
	product=ptr[1]%2==1?product*ptr[1]:product;
	product=ptr[2]%2==1?product*ptr[2]:product;
	product=ptr[3]%2==1?product*ptr[3]:product;
	return product;
}
int main()
{
	int arr[4],ans;// declaration of an array
	printf("Enter 4 elements into an array=");
	scanf("%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3]);
	ans=calProduct(arr);
	printf("The product of odd numbers in the array=%d",ans);
	return 0;	
}
