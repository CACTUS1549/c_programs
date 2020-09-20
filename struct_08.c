/*
	STRUCTURES AND POINTERS -- INCLUDING POINTERS AS STRUCTURE MEMBERS

*/

#include <stdio.h>

struct data
{
	int *value;
	int *rate;
	char *p_name;
};

int main(int argc, char const *argv[])
{
	int cost = 6999;
	int interest = 9;

	struct data some_data;
	some_data.value = &cost;
	some_data.rate = &interest;
	some_data.p_name = "Dhyana Ring";

	printf("The cost of product is %d\n", *some_data.value);
	printf("The interest for the product is %d\n", *some_data.rate);
	printf("The name of the product is %s\n",some_data.p_name);

	return 0;
}