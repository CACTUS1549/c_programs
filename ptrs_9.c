/*
	DYNAMIC MEMORY ALLOCATION
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	//malloc function return type is a pointer to void meaning it can be converted to any type. 
	//malloc is casted to pointer to int and assigned to a pointer to int variable. 
	int *pi = (int *)malloc(sizeof(int));
	*pi = 5;
	printf("The value of pi is %d\n",*pi);
	free(pi);
	//assign null to after the memroy is freed to avoid to unintentional behaviour 
	//if memory is accessed after freed.
	pi = NULL;	
	return 0;
}