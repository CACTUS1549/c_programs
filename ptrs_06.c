/*
	STRINGS IN C
*/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char some_string[] = "This is a string.";
	//print entire string.
	printf("%s\n", some_string);

	//print a particular character in a string.
	printf("First char of the string is: %c\n", some_string[0]);
	printf("Second char of the string is: %c\n", some_string[1]);


	//start address for the string 
	printf("The start address for the string is: %p\n", &some_string);


	//The name of the array without the brackets is a pointer to the first element of the array. 

		
	int array[4] = {1, 2, 3, 4};

	//DIRECT ACCESS

	printf("Array element 0 is: %d\n", array[0]);
	printf("Array element 1 is: %d\n", array[1]);
	printf("Array element 2 is: %d\n", array[2]);
	printf("Array element 3 is: %d\n", array[3]);

	printf("Address of Array element 0 is: %p\n", &array[0]);
	printf("Address of Array element 1 is: %p\n", &array[1]);
	printf("Address of Array element 2 is: %p\n", &array[2]);
	printf("Address of Array element 3 is: %p\n", &array[3]);

	/*
		==> array = &array[0]
		==> (array + 1) = &array[1]
		==> (array + 2) = &array[2]
		==> (array + 3) = &array[3]


		*(array) == array[0];
		*(array + 1) == array[1];
		*(array + 2) == array[2];
		*(array + 3) == array[3];
	*/

	//INDIRECT ACCESS
	printf("Array element 0 is: %d\n", *array);
	printf("Array element 1 is: %d\n", *(array + 1));
	printf("Array element 2 is: %d\n", *(array + 2));
	printf("Array element 3 is: %d\n", *(array + 3));

	printf("Address of Array element 0 is: %p\n", array);
	printf("Address of Array element 1 is: %p\n", (array + 1));
	printf("Address of Array element 2 is: %p\n", (array + 2));
	printf("Address of Array element 3 is: %p\n", (array + 3));


	//since array name is a pointer the array's first element. 
	//so a string can also be written the following way:
	char *another_string = "This is another string.";

	//print entire string.
	printf("%s\n", another_string);

	//print a particular character in a string.
	printf("Second char of the string is: %c\n", *(another_string));
	printf("Second char of the string is: %c\n", *(another_string + 1));


	return 0;
}