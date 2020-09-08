/*	Problem Statement:

Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.

*/

/*	Author - Deepak Reddy	*/
/*	Date - 07 Sep 2020	*/


#include <stdio.h>

int main(){

	#define dearness_allowance_percent			40
	#define house_rent_allowance_percent		20
	
	float basic_salary, gross_salary;
	float salary_aftr_dearness, salary_aftr_house_rent;
	
	printf("Enter the basic salary of Ramesh: \n");
	scanf("%f", &basic_salary);
	
	salary_aftr_dearness = basic_salary * 0.4;
	salary_aftr_house_rent = basic_salary * 0.2;
	gross_salary = basic_salary - (salary_aftr_dearness + salary_aftr_house_rent);
	
	printf("Gross salary of Ramesh is: %.2f\n", gross_salary);	
	
	
	return 0;
}
