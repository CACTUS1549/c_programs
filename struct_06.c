/*
	IMPLEMENTING STRUCTURES -- INITIALIZING STRUCTURES - LESSON 02 - STRUCTURE IN STRUCTURE INIT

*/

#include <stdio.h>

struct customer
{
	char name[30];
	char contact[15];
};


struct sale
{
	struct customer buyer;
	char customerName[40];
	char item[40];
	float amount;
};

int main(int argc, char const *argv[])
{
	struct sale mysale = {{"Deepak Reddy", "9940187447"}, "Avantari Technologies", "Smart Dhyana", 6999.0};

	printf("Company Name: %s\n",mysale.customerName);
	printf("Product Purchased: %s\n",mysale.item);
	printf("Amount Paid: %.2f\n", mysale.amount);

	printf("Buyer Name: %s\n",mysale.buyer.name);
	printf("Buyer Phone: %s\n",mysale.buyer.contact);

	return 0;
}