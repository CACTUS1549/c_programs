/*
	IMPLEMENTING STRUCTURES -- ARRAYS OF STRUCTURES

	Demonstrates using arrays of structures

*/

#include <stdio.h>

#define NAME_SIZE	30
#define PHONE_NUM_SIZE	15
#define MAX_LIST_SIZE	4

struct entry
{
	char fname[NAME_SIZE];
	char lname[NAME_SIZE];
	char phoneNum[PHONE_NUM_SIZE];
};

/*	define an array of structures */

struct entry list[MAX_LIST_SIZE];

int main(int argc, char const *argv[])
{
	/*	loop to input 2 persons data	*/

	for (int i = 0; i < MAX_LIST_SIZE; i++)
	{
		printf("Person %d First Name:\n", i);
		scanf("%s", list[i].fname);

		printf("Person %d Last Name:\n", i);
		scanf("%s", list[i].lname);

		printf("Person %d Phone Number:\n", i);
		scanf("%s", list[i].phoneNum);

	}

	printf("\n\n");	//give a gap of two lines

	/*	Loop to display data	*/

	for (int i = 0; i < MAX_LIST_SIZE; i++)
	{
		printf("Name: %s %s\n", list[i].fname, list[i].lname);
		printf("Phone Number: %s\n", list[i].phoneNum);
	}
	return 0;
}