/*
	POINTERS AND FUNCTIONS -- PASSING A POINTER TO A POINTER. CALL BY REFERENCE. 

	ptrs_10.c and ptrs_11.c are passing pointers to the funcition using pass by value.
	this example uses pass by reference, i.e a pointer is passed as a pointer to the function 
	rather than passed as a value. 

*/

#include <stdio.h>
#include <stdlib.h>

void allocateArray(int **array, int size, int value);

int main(int argc, char const *argv[])
{	
	int *vector = NULL;
	allocateArray(&vector, 5, 45);
	for (int i = 0; i < 5; i++)
	{
		printf("Value at Index %d:\t %d\n", i, vector[i]);
	}

	return 0;
}

//When a pointer is passed to a function, it is always good practice 
//to verify it is not null before using it.

void allocateArray(int **array, int size, int value)
{
	*array = (int *)malloc(size * sizeof(int));
	if (array != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			*(*array+i) = value;
		}
	}
}