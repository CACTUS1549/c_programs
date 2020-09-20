/*
	IMPLEMENTING STRUCTURES

*/

#include <stdio.h>

int length, width;
long area;

struct coord
{
	int x;
	int y;
} mypoint;

int main(int argc, char const *argv[])
{
	/*set the values into the coordinates*/
	mypoint.x = 12;
	mypoint.y = 14;

	printf("The entered coordinates are: (%d, %d).\n",mypoint.x, mypoint.y);
	return 0;
}