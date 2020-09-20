/*
	IMPLEMENTING STRUCTURES -- INITIALIZING STRUCTURES - LESSON 01

*/

#include <stdio.h>

struct sale
{
	char customer[40];
	char item[40];
	float amount;
};

int main(int argc, char const *argv[])
{
	struct sale mysale = {"Avantari Technologies", "Smart Dhyana", 6999.0};

	printf("Company Name: %s\n",mysale.customer);
	printf("Product Purchased: %s\n",mysale.item);
	printf("Amount Paid: %.2f\n", mysale.amount);
	return 0;
}