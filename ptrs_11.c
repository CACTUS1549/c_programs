/*
	POINTERS AND FUNCTIONS -- PASSING NULL POINTERS TO A FUNCTION.
*/

#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int *array, int size, int value);

int main(int argc, char const *argv[])
{
	int *vector = (int *) malloc(5 * sizeof(int));
	allocateArray(vector, 5, 45);
	for (int i = 0; i < 5; i++)
	{
		printf("Value at Index %d:\t %d\n", i, vector[i]);
	}

	return 0;
}

//When a pointer is passed to a function, it is always good practice 
//to verify it is not null before using it.

int *allocateArray(int *array, int size, int value)
{
	if (array != NULL)
	{
		for (int i = 0; i < size; i++)
		{
			array[i] = value;
		}
	}

	return array;
}