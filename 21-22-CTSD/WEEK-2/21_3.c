#include <stdio.h>
int main() {
	int arr[] = { 1, 2, 3, 4, 7, 98, 0, 12, 35, 99, 14 };
	printf("Number of Elements:%d ", sizeof(arr) / sizeof(arr[0]));
	return 0;
}
/* Output in dev c++ compiler
   Number of Elements:11 */
   
/* Output in online GDB compiler
   Number of Elements:11 */
