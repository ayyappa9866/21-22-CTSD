#include<stdio.h>
int main()
{
	int arr[10]; // array declaration
	printf("no of bytes allocated for char=%d",sizeof(char));
	printf("\nno of bytes allocated for short int=%d",sizeof(short int));
	printf("\nno of bytes allocated for int=%d",sizeof(int));
	printf("\nno of bytes allocated for long int=%d",sizeof(long int));
	printf("\nno of bytes allocated for long long int=%d",sizeof(long long int));
	printf("\nno of bytes allocated for float=%d",sizeof(float));
	printf("\nno of bytes allocated for double=%d",sizeof(double));
	printf("\nno of bytes allocated for long double=%d",sizeof(long double));
	printf("\nno of bytes allocated for arr =%d",sizeof(arr));
	return 0;
}
/* online GDB compiler output
no of bytes allocated for char=1
no of bytes allocated for short int=2
no of bytes allocated for int=4
no of bytes allocated for long int=8
no of bytes allocated for long long int=8
no of bytes allocated for float=4
no of bytes allocated for double=8
no of bytes allocated for long double=16 
*/

/* Dev c++ compiler output
no of bytes allocated for char=1
no of bytes allocated for short int=2
no of bytes allocated for int=4
no of bytes allocated for long int=4
no of bytes allocated for long long int=8
no of bytes allocated for float=4
no of bytes allocated for double=8
no of bytes allocated for long double=16 */
