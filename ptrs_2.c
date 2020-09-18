/*
	NULL OPERATOR
		-- When NULL is assigned to a pointer, it means the pointer does not point to anything. 
		It does not point to any area of memory.

		-- Two null pointers will always be equal to each other.

		-- A null pointer and an uninitialised pointer are different. 
		An uninitialised pointer can contain any value, whereas a pointer containing NULL 
		4does not reference any location in memory. 
*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num = 8;
	int *pi = NULL;	//Initialized to NULL meaning it does not point to any memory location.

	printf("The value of num is %d\n", num);
	printf("The value of pi before is %p\n", pi);

	pi = &num;
	printf("The value of pi after is %p\n", pi);

	int num2= 9;
	printf("The value of num2 is %d\n", num2);

	//Not initialized meaning it may contain garbage value and should not be used. 
	int *pi_2;	
	printf("The value of pi_2 before is %p\n", pi_2);	//some compilers initialize to 0 by default.

	pi_2 = &num2;	//assign it some address.
	printf("The value of pi_2 after is %p\n", pi_2); 



	return 0;
}