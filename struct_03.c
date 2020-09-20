/*
	IMPLEMENTING STRUCTURES -- STRUCTURES THAT CONTAIN ARRAYS

	Demonstrates a structure that has array members.

*/

#include <stdio.h>

#define NAME_SIZE 30


struct data
{
	float amount;
	char fname[NAME_SIZE];
	char lname[NAME_SIZE];
} record;

int main(int argc, char const *argv[])
{
	/*	Input data from the keyboard	*/
	puts("Enter the donars first name:");
	scanf("%s", record.fname);

	puts("Enter donars last name:");
	scanf("%s", record.lname);

	puts("Enter the amount of blood donated:");
	scanf("%f", &record.amount);

	//display that information
	printf("The donar %s %s gave %.2f ml blood.\n",record.fname, record.lname, record.amount);
	return 0;
}