/*
	POINTER TO VOID
		-- Any pointer can be assigned to a pointer to void. 
		It can then be cast back to its original pointer type. 
    	-- Be careful when using pointers to void. If you cast an arbitrary pointer to a 
    	pointer to void, there is nothing preventing you from casting it to a different pointer type. 

*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	int num = 9;
	void *pv;
	printf("The value of pv after initialization is %p\n", pv);

	pv = &num;
	printf("the value of pv after num is: %p\n", pv);

	//SYNTAX ERROR - you cannot access underlying value without proper casting from void to int data type.

	/*   printf("Indirect access of num is %d\n", *pv); */

	//CORRECT TYPE OF ACCESSING DATA USING CASTING. 	
	printf("Indirect access of num is %d\n", *(int *)pv);

	char alphabet = 'A';
	pv = &alphabet;
	printf("the value of pv after char is: %p\n", pv);

	//SYNTAX ERROR - you cannot access underlying value without proper casting from void to char data type.
	
	/* printf("Indirect access of char is %c\n", *pv); */

	//CORRECT TYPE OF ACCESSING DATA USING CASTING.
	printf("Indirect access of char is %c\n", *(char *)pv);

	pv = NULL;
	printf("the value of pv final is: %p\n", pv);
	return 0;
}