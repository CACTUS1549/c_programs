/*	Problem Statement:

If a five-digit number is input through the keyboard, 
write a program to calculate the sum of its digits. 

*/

/*	Author - Deepak Reddy	*/
/*	Date - 08 Sep 2020	*/


#include <stdio.h>

int main(){

	int input_number = 0;
	
	printf("Enter a five-digit number:\n");
	scanf("%d", &input_number);


	//get the last digit or one's place digit
	int digit_5 = input_number % 10;
	printf("digit_5: %d\n", digit_5);

	//subract last digit from the input number to make the number divisible by 10 and its multiples. 
	int digit_4 = ((input_number - digit_5) / 10) % 10;
	printf("digit_4: %d\n", digit_4);

	//divide the number by 100 two remove 2 zeros and get the first digit using modulo operator
	int digit_3 = ((input_number - (input_number % 100)) / 100 ) % 10;
	printf("digit_3: %d\n", digit_3);

	//divide the number by 1000 two remove 3 zeros and get the first digit using modulo operator
	int digit_2 = ((input_number - (input_number % 1000)) / 1000 ) % 10;
	printf("digit_2: %d\n", digit_2);

	//divide the number by 10000 two remove 4 zeros and get the first digit using modulo operator
	int digit_1 = ((input_number - (input_number % 10000)) / 10000 ) % 10;
	printf("digit_1: %d\n", digit_1);


	return 0;
}
