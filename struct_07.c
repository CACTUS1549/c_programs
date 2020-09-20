/*
	IMPLEMENTING STRUCTURES -- INITIALIZING STRUCTURES - LESSON 03 - ARRAY OF STRUCTURES INIT

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
	struct sale y2020[2] = 
	{
		{{"Deepak Reddy", "9940187447"}, "Avantari Technologies", "Smart Dhyana", 6999.0},
		{{"Dheeraj Reddy", "9999999999"}, "Agnikul Cosmos", "Smart Dhyana", 6999.0}
	};


	return 0;
}