/*
	ARRAYS
*/


#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE	5

int main(int argc, char const *argv[])
{
	int int_array[MAX_ARRAY_SIZE] = {1, 2, 3, 4, 5};	//pre-defined size of 5

	float float_array[] = {1.0, 2.0, 3.01, 4.05}; //compiler determines the size from values i.e 4

	//SYNTAX ERROR - NEEDS ARRAY SIZE OR INTILIZER VALUES TO ALLOCATE MEMORY.
	/*	int array_2[];	*/	


	//accessing array elements.
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		printf("Array element %d\t Value: %d\n",i, int_array[i]);
	}

	//change array elements
	for (int i = 0; i < MAX_ARRAY_SIZE; i++)
	{
		int_array[i] = 7;
		printf("New array element %d\t New value: %d\n",i, int_array[i]);
	}
	
	return 0;
}