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

int main(){
	
	#define max_marks				100
	#define min_marks				0

	int aggreg_marks, math_marks, physics_marks, chemistry_marks, bio_marks, eng_marks;
	float percentage;
	int temp_marks;

	printf("Enter Math marks\n");
	scanf("%d", &temp_marks);
	if (temp_marks >= min_marks && temp_marks <= max_marks)
	{	
		printf("Correct marks entered\n");
		math_marks = temp_marks;
	} else{
		printf("Math marks are out of range. Please enter between 0-100\n");
		scanf("%d", &temp_marks);
	}

	printf("if-else exited.\n");
	printf("%d\n", math_marks);
	return 0;
}
