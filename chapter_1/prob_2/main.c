/*	Problem Statement:

The distance between two cities (in km.) is input through the
keyboard. Write a program to convert and print this distance in
meters, feet, inches and centimeters.

*/

	/*
		conversion hint:
			1KM = 1000 meters
			1KM = 3280.84 Foot
			1Km = 39370.1 inches
			1Km = 100000.054 centimeter
	*/

/*	Author - Deepak Reddy	*/
/*	Date - 07 Sep 2020	*/


#include <stdio.h>

int main(){

	#define one_km_in_meter				1000
	#define one_km_in_foot				3280.84
	#define one_km_in_inch				39370.1
	#define one_km_in_centimeter		100000.054

	float distance_in_km, distance_in_meter, distance_in_foot, distance_in_inch, distance_in_centimeter = 0.0;

	printf("Enter distance in Km:\n");
	scanf("%f", &distance_in_km);

	distance_in_meter = distance_in_km * one_km_in_meter;
	distance_in_foot = distance_in_km * one_km_in_foot;
	distance_in_inch = distance_in_km * one_km_in_inch;
	distance_in_centimeter = distance_in_km * one_km_in_centimeter;

	printf("Entered distance in meters:\t%.3f\n", distance_in_meter);
	printf("Entered distance in foot:\t%.3f\n", distance_in_foot);
	printf("Entered distance in inch:\t%.3f\n", distance_in_inch);
	printf("Entered distance in centimeter:\t%.3f\n", distance_in_centimeter);

	return 0;
}
