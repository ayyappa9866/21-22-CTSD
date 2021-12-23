#include<stdio.h>
union test{
	int x;
	char arr[8];
	int y;
};
int main()
{
	printf("%d",sizeof(union test));
	return 0;
}
/*union is not going to allocate the memory of each member.
In the union which member is required the highest amount of memory for that member, only memory will be allocated, that memory will be shared by all members in the union.
In structure, the memory will be allocated for every member.
so the output is 8
*/

