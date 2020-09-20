/*
	IMPLEMENTING STRUCTURES -- INCLUDING STRUCTURES WITH OTHER STRUCTURES

*/

#include <stdio.h>

int length, width;

struct coord
{
	int x;
	int y;
};

struct rectangle
{
	struct coord topleft;
	struct coord bottomrt;
}mybox;

int main(int argc, char const *argv[])
{
	/*	Input coordinates	*/

	printf("Enter the top left coordinates of rectangele:\n");
	scanf("%d", &mybox.topleft.x);

	printf("Enter the btm right coordinates of rectangele:\n");
	scanf("%d", &mybox.bottomrt.y);

	return 0;
}