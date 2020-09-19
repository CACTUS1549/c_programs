/*
	POINTERS AND FUNCTIONS -- RETURN POINTER FROM A FUNCTION.
*/

#include <stdio.h>
#include <stdlib.h>

int *allocateArray(int size, int value);

int main(int argc, char const *argv[])
{
	int *vector = allocateArray(5, 45);

	for (int i = 0; i < 5; i++)
	{
		printf("Value: %d\n", vector[i]);
	}
	free(vector);
	
	return 0;
}

int *allocateArray(int size, int value)
{
	int *array = (int *)malloc(size * sizeof(int));

	for (int i = 0; i < size; i++)
	{
		array[i] = value;
	}

	return array;
}
