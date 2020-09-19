/*
	-- Basic pointer declaration.
	-- * is an overloaded symbol used for multiplication, pointer declaration and dereferencing of pointer.
	-- There are two methods to access underlying value. One: direct access and two: Indirect access.
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
	int num = 7;
	int *pi = &num;

	printf("The address of num is %p\n", pi);

	/*	Indirect access	*/
	printf("The value of num is %d\n", *pi);

	/*	Direct access	*/
	printf("The value of num is %d\n",num);

	return 0;
}