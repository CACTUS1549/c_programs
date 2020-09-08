/*	Problem Statement:

If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student.
Assume that the maximum marks that can be obtained by a student
in each subject is 100.

*/

/*	Author - Deepak Reddy	*/
/*	Date - 07 Sep 2020	*/


#include <stdio.h>
#include <stdbool.h>

int get_marks();

#define max_marks				100
#define min_marks				0
#define max_total_marks			500

int math_marks, physics_marks, chem_marks, bio_marks, english_marks, aggregate_marks = 0;
float marks_percentage = 0.0;


int main(){
	
	 math_marks = get_marks();
	 physics_marks = get_marks();
	 chem_marks = get_marks();
	 bio_marks = get_marks();
	 english_marks = get_marks();

	 aggregate_marks = math_marks + physics_marks + chem_marks + bio_marks + english_marks;
	 marks_percentage = (aggregate_marks * 100) / max_total_marks;

	 printf("Aggregate marks: %d\n", aggregate_marks);
	 printf("Marks percentage: %.2f\n", marks_percentage);

	return 0;
}

int get_marks(void){
	bool is_wrong_marks_entered = false;
	int entered_marks = 0;

	if (!is_wrong_marks_entered)
	{
		printf("Enter marks:\n");
		scanf("%d", &entered_marks);	
	}

	do
	{

		if (entered_marks >=0 && entered_marks <=100)
		{
			is_wrong_marks_entered = false;
		}

		else{
			printf("Marks out of range. Enter correct marks:\n");
			scanf("%d", &entered_marks);
			is_wrong_marks_entered = true;
		}
	} while (is_wrong_marks_entered);

	return entered_marks;
}